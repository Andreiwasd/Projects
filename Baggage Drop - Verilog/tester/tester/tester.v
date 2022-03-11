`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company:       UPB
// Engineer:      Ovidiu Moldoveanu
//
// Create Date:   13:05:30 09/10/2021
// Design Name:   tester Baggage Drop
// Module Name:   tester
// Project Name:  Tema 1 - Baggage Drop
// Target Device: ISim
// Tool versions: 14.7
// Description:   tester for combinational module
////////////////////////////////////////////////////////////////////////////////

module tester(
    // sensors_input block inputs
    output reg [7 : 0] sensor1_data,
    output reg [7 : 0] sensor2_data,
    output reg [7 : 0] sensor3_data,
    output reg [7 : 0] sensor4_data,
    
    // SQRT block input
    output reg [7 : 0] sqrt_in,

    // display_and_drop block inputs
    output reg[15 : 0] t_lim_data,
    output reg[15 : 0] t_act_data,
    output reg         drop_en,

    // sensors_input block outputs
    input     [7 : 0]  ref_height_out,
    input     [7 : 0]  tst_height_out,

    // SQRT block outputs
    input     [15 : 0] ref_sqrt_out, 
    input     [15 : 0] tst_sqrt_out,

    // display_and_drop block outputs
    input     [6 : 0]  ref_seg1,
    input     [6 : 0]  ref_seg2,
    input     [6 : 0]  ref_seg3,
    input     [6 : 0]  ref_seg4,
    input              ref_drop_activated,
    input     [6 : 0]  tst_seg1,
    input     [6 : 0]  tst_seg2,
    input     [6 : 0]  tst_seg3,
    input     [6 : 0]  tst_seg4,
    input              tst_drop_activated
);

`include "adapter.inc"

parameter early_exit                = 0;    // boolean; bail on first error
parameter show_sensors_output       = 1;    // boolean; show what is being tested
parameter show_display_drop_output  = 1;    // boolean; show what is being tested
parameter show_sqrt_output          = 1;    // boolean; show what is being tested
parameter show_top_output           = 1;    // boolean; show what is being tested
parameter max_errors                = 32;   // integer; maximum number of errors to show

// Tester
integer i;                                  // counters that enumerate all input operands

integer results_good;                       // number of outputs computed correctly
integer results_total;                      // total number of outputs

real percentage;                            // test passed percentage
real grade;                                 // test grade
integer file;                               // results file

reg [50*8-1 : 0] test_name;
real test_value;
real test_penalty;

integer config_file, data_file;
integer nof_sensor_inputs;

// sensors_input block test
reg[`DATA_WIDTH : 0] s1_data, s2_data, s3_data, s4_data;

// display_and_drop block test and top block test
reg[2 * `DATA_WIDTH : 0] t_act, t_lim;
reg drop_enable;

initial begin
    results_good    = 0;
    results_total   = 0;
    sqrt_in         = 0;
    sensor1_data    = 0;
    sensor2_data    = 0;
    sensor3_data    = 0;
    sensor4_data    = 0;
    t_lim_data      = 0;
    t_act_data      = 0;
    drop_en         = 1'b0;
    
    //////////// reading config file ////////////////
    config_file = $fopen("test.config", "r");
    if(!config_file) begin
        $write("error opening config file\n");
        $finish;
    end
    if($fscanf(config_file, "name=%s\n", test_name) != 1) begin
        $write("error reading test name\n");
        $finish;
    end
    if($fscanf(config_file, "value=%f\n", test_value) != 1) begin
        $write("error reading test value\n");
        $finish;
    end
    if($fscanf(config_file, "penalty=%f\n", test_penalty) != 1) begin
        $write("error reading test penalty\n");
        $finish;
    end
    $fclose(config_file);
    ////////// reading config file ////////////////////

    // Wait 100 ns for global reset to finish
    #100;
    
    case(test_name)
        "test_square_root": begin
            for(i = 0; i < 2 ** `DATA_WIDTH; i = i + 1) begin
                results_total = results_total + 1;
                    
                sqrt_in = i;
                #1;                                             // needed to force update of output signals

                if(show_sqrt_output)
                    print_sqrt_input(sqrt_in);

                if(tst_sqrt_out === ref_sqrt_out) begin         // result is good
                    results_good = results_good + 1;

                    if(show_sqrt_output) begin
                        $write(", ");
                        print_sqrt_output(ref_sqrt_out);
                        $write("\tok\n");
                    end
                end
                else begin                                      // result is wrong
                    if(show_sqrt_output)
                        $write("\n");

                    if(show_sqrt_output || (results_total - results_good <= max_errors)) begin
                        $write("\terror: ");
                        print_sqrt_input(sqrt_in);
                        $write(", ");
                        print_sqrt_output(tst_sqrt_out);
                        $write(", expected ");
                        print_sqrt_output(ref_sqrt_out);
                        $write("\n");
                    end
                    if(!show_sqrt_output && (results_total - results_good == max_errors)) begin
                        $write("\t.\n");
                        $write("\t.\n");
                        $write("\t.\n");
                    end

                    if(early_exit) begin                        // force exit from testing loop
                        i = 2 ** `DATA_WIDTH;
                    end
                end
            end
        end 

        "test_sensors_input": begin
            //----------------- read sensors input data ------------------
            data_file = $fopen("test.data", "r");
            if(!data_file) begin
                $write("error opening data file\n");
                $finish;
            end
            
            if($fscanf(data_file, "nof_inputs = %d\n", nof_sensor_inputs) != 1) begin
                $write("error reading nof_sensor_inputs\n");
                $finish;
            end

            for(i = 0; i < nof_sensor_inputs; i = i + 1) begin
                if($fscanf(data_file, "%d", s1_data) != 1) begin
                    $write("error reading sensors1 data for input number %d\n", i);
                    $finish;
                end
                if($fscanf(data_file, "%d", s2_data) != 1) begin
                    $write("error reading sensors2 data for input number %d\n", i);
                    $finish;
                end
                if($fscanf(data_file, "%d", s3_data) != 1) begin
                    $write("error reading sensors3 data for input number %d\n", i);
                    $finish;
                end
                if($fscanf(data_file, "%d\n", s4_data) != 1) begin
                    $write("error reading sensors4 data for input number %d\n", i);
                    $finish;
                end
                // ---------------------------------------------------------------

                results_total = results_total + 1;
                    
                sensor1_data = s1_data;
                sensor2_data = s2_data;
                sensor3_data = s3_data;
                sensor4_data = s4_data;
                #1;                                             // needed to force update of output signals

                if(show_sensors_output)
                    print_sensors_input(sensor1_data, sensor2_data, sensor3_data, sensor4_data);

                if(tst_height_out === ref_height_out) begin       // result is good
                    results_good = results_good + 1;

                    if(show_sensors_output) begin
                        $write(", ");
                        print_sensors_output(ref_height_out);
                        $write("\tok\n");
                    end
                end
                else begin                                      // result is wrong
                    if(show_sensors_output)
                        $write("\n");

                    if(show_sensors_output || (results_total - results_good <= max_errors)) begin
                        $write("\terror: ");
                        print_sensors_input(sensor1_data, sensor2_data, sensor3_data, sensor4_data);
                        $write(", ");
                        print_sensors_output(tst_height_out);
                        $write(", expected ");
                        print_sensors_output(ref_height_out);
                        $write("\n");
                    end
                    if(!show_sensors_output && (results_total - results_good == max_errors)) begin
                        $write("\t.\n");
                        $write("\t.\n");
                        $write("\t.\n");
                    end

                    if(early_exit) begin                        // force exit from testing loop
                        i = nof_sensor_inputs;
                    end
                end
            end
        end 

        "test_baggage_drop_system": begin    
            //----------------- read sensors input data ------------------
            data_file = $fopen("test.data", "r");
            if(!data_file) begin
                $write("error opening data file\n");
                $finish;
            end
            
            if($fscanf(data_file, "nof_inputs = %d\n", nof_sensor_inputs) != 1) begin
                $write("error reading nof_sensor_inputs\n");
                $finish;
            end
            
            for(i = 0; i < nof_sensor_inputs; i = i + 1) begin
                if($fscanf(data_file, "%d", s1_data) != 1) begin
                    $write("error reading sensors1 data for input number %d\n", i);
                    $finish;
                end
                if($fscanf(data_file, "%d", s2_data) != 1) begin
                    $write("error reading sensors2 data for input number %d\n", i);
                    $finish;
                end
                if($fscanf(data_file, "%d", s3_data) != 1) begin
                    $write("error reading sensors3 data for input number %d\n", i);
                    $finish;
                end
                if($fscanf(data_file, "%d", s4_data) != 1) begin
                    $write("error reading sensors4 data for input number %d\n", i);
                    $finish;
                end
                if($fscanf(data_file, "%b", t_lim) != 1) begin
                    $write("error reading t_lim data for input number %d\n", i);
                    $finish;
                end
                if($fscanf(data_file, "%d\n", drop_enable) != 1) begin
                    $write("error reading drop_enable data for input number %d\n", i);
                    $finish;
                end
                // ---------------------------------------------------------------
    
                results_total = results_total + 1;
                    
                sensor1_data = s1_data;
                sensor2_data = s2_data;
                sensor3_data = s3_data;
                sensor4_data = s4_data;
                t_lim_data   = t_lim;
                drop_en      = drop_enable;                
                #1;                                             // needed to force update of output signals

                if(show_top_output)
                    print_top_input(sensor1_data, sensor2_data, sensor3_data, sensor4_data, t_lim_data, drop_en);

                if(tst_seg1 === ref_seg1 && tst_seg2 === ref_seg2 && tst_seg3 === ref_seg3 && tst_seg4 === ref_seg4 && 
                    tst_drop_activated === ref_drop_activated) begin       // result is good
                    
                    results_good = results_good + 1;

                    if(show_top_output) begin
                        $write(", ");
                        print_top_output(ref_seg1, ref_seg2, ref_seg3, ref_seg4, ref_drop_activated, 1'b0);
                        $write("\tok\n");
                    end
                end
                else begin                                      // result is wrong
                    if(show_top_output)
                        $write("\n");

                    if(show_top_output || (results_total - results_good <= max_errors)) begin
                        $write("\terror: ");
                        print_top_input(sensor1_data, sensor2_data, sensor3_data, sensor4_data, t_lim_data, drop_en);
                        $write(", ");
                        print_top_output(tst_seg1, tst_seg2, tst_seg3, tst_seg4, tst_drop_activated, 1'b1);
                        $write(", expected ");
                        print_top_output(ref_seg1, ref_seg2, ref_seg3, ref_seg4, ref_drop_activated, 1'b1);
                        $write("\n");
                    end
                    if(!show_top_output && (results_total - results_good == max_errors)) begin
                        $write("\t.\n");
                        $write("\t.\n");
                        $write("\t.\n");
                    end

                    if(early_exit) begin                        // force exit from testing loop
                        i = nof_sensor_inputs;
                    end
                end
                             
            end
        end      

        "test_display_and_drop": begin    
            //----------------- read sensors input data ------------------
            data_file = $fopen("test.data", "r");
            if(!data_file) begin
                $write("error opening data file\n");
                $finish;
            end
            
            if($fscanf(data_file, "nof_inputs = %d\n", nof_sensor_inputs) != 1) begin
                $write("error reading nof_sensor_inputs\n");
                $finish;
            end
            
            for(i = 0; i < nof_sensor_inputs; i = i + 1) begin
                if($fscanf(data_file, "%b", t_act) != 1) begin
                    $write("error reading t_act data for input number %d\n", i);
                    $finish;
                end
                if($fscanf(data_file, "%b", t_lim) != 1) begin
                    $write("error reading t_lim data for input number %d\n", i);
                    $finish;
                end
                if($fscanf(data_file, "%d\n", drop_enable) != 1) begin
                    $write("error reading drop_enable data for input number %d\n", i);
                    $finish;
                end
                // ---------------------------------------------------------------
    
                results_total = results_total + 1;
                    
                t_lim_data = t_lim;
                t_act_data = t_act;
                drop_en    = drop_enable;                
                #1;                                             // needed to force update of output signals

                if(show_display_drop_output)
                    print_display_input(t_act_data, t_lim_data, drop_en);

                if(tst_seg1 === ref_seg1 && tst_seg2 === ref_seg2 && tst_seg3 === ref_seg3 && tst_seg4 === ref_seg4 && 
                    tst_drop_activated === ref_drop_activated) begin       // result is good
                    
                    results_good = results_good + 1;

                    if(show_display_drop_output) begin
                        $write(", ");
                        print_display_output(ref_seg1, ref_seg2, ref_seg3, ref_seg4, ref_drop_activated, 1'b0);
                        $write("\tok\n");
                    end
                end
                else begin                                      // result is wrong
                    if(show_display_drop_output)
                        $write("\n");

                    if(show_display_drop_output || (results_total - results_good <= max_errors)) begin
                        $write("\terror: ");
                        print_display_input(t_act_data, t_lim_data, drop_en);
                        $write(", ");
                        print_display_output(tst_seg1, tst_seg2, tst_seg3, tst_seg4, tst_drop_activated, 1'b1);
                        $write(", expected ");
                        print_display_output(ref_seg1, ref_seg2, ref_seg3, ref_seg4, ref_drop_activated, 1'b1);
                        $write("\n");
                    end
                    if(!show_display_drop_output && (results_total - results_good == max_errors)) begin
                        $write("\t.\n");
                        $write("\t.\n");
                        $write("\t.\n");
                    end

                    if(early_exit) begin                        // force exit from testing loop
                        i = nof_sensor_inputs;
                    end
                end

            end
        end

        default: begin end
    endcase 

    if(results_good == results_total)
        $write("test ok\n");

    percentage  = results_good * 1.0 / results_total;
    grade       = results_good * 1.0 / results_total;

    // print results
    file = $fopen("result.tester");
    $fwrite(file, "%6.2f: %0d correct out of %0d (%6.2f%% completed)\n", test_value * (grade - 1.0), results_good, results_total, 100.0 * percentage);
    $fclose(file); 
end

endmodule

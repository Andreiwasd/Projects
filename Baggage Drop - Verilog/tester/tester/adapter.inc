////////////////////////////////////////////////////////////////////////////////
// Company:       UPB
// Engineer:      Ovidiu Moldoveanu
//
// Create Date:   15:51:30 09/10/2021
// Design Name:   tester Baggage Drop
// Module Name:   tester
// Project Name:  Tema 1 - Baggage Drop
// Target Device: ISim
// Tool versions: 14.7
// Description:   tester for combinational module
////////////////////////////////////////////////////////////////////////////////

`define DATA_WIDTH 		 8

task print_top_input;
input [`DATA_WIDTH - 1 : 0]  sensor1;
input [`DATA_WIDTH - 1 : 0]  sensor2;
input [`DATA_WIDTH - 1 : 0]  sensor3;
input [`DATA_WIDTH - 1 : 0]  sensor4;
input [2 * `DATA_WIDTH - 1 : 0]  t_lim;
input drop_en;

reg [2 * `DATA_WIDTH - 1 : 0]  t1;
reg drop;

reg [`DATA_WIDTH - 1 : 0]  s1, s2, s3, s4;
begin
	s1 		= sensor1;
	s2 		= sensor2;
	s3 		= sensor3;
	s4 		= sensor4;
	t1 		= t_lim;
	drop 	= drop_en;
	$write("testing: S1 = %0d, S2 = %0d, S3 = %0d, S4 = %0d, T_lim = %0.2f, drop_en = %0d", s1, s2, s3, s4, $itor(t1*(2.0**-8)), drop);
end

endtask

task print_top_output;
input [6 : 0]  seg1;
input [6 : 0]  seg2;
input [6 : 0]  seg3;
input [6 : 0]  seg4;
input drop_activated;
input error_print;

print_display_output(seg1, seg2, seg3, seg4, drop_activated, error_print);
endtask


//------------------- SENSORS INPUT -------------------
task print_sensors_input;
input [`DATA_WIDTH - 1 : 0]  sensor1;
input [`DATA_WIDTH - 1 : 0]  sensor2;
input [`DATA_WIDTH - 1 : 0]  sensor3;
input [`DATA_WIDTH - 1 : 0]  sensor4;

reg [`DATA_WIDTH - 1 : 0]  s1, s2, s3, s4;
begin
	s1 = sensor1;
	s2 = sensor2;
	s3 = sensor3;
	s4 = sensor4;
	$write("testing: S1 = %0d \t S2 = %0d \t S3 = %0d \t S4 = %0d", s1, s2, s3, s4);
end
endtask

//------------------- SENSORS OUTPUT -------------------
task print_sensors_output;
input [`DATA_WIDTH - 1 : 0]  height;

reg [`DATA_WIDTH - 1 : 0]  h;
begin
	h = height;
	$write("\t result: H = %0d", h);
end
endtask

//------------------- SQRT INPUT ----------------------
task print_sqrt_input;
input [`DATA_WIDTH-1 : 0] in;

reg[`DATA_WIDTH - 1 : 0] a;
begin
    a = in;
    $write("testing: in = %0d", a);
end

endtask

//------------------- SQRT OUTPUT ---------------------
task print_sqrt_output;
input [2 * `DATA_WIDTH - 1 : 0] out;

reg[2 * `DATA_WIDTH - 1 : 0] a;
begin
    a = out;	
    $write("\t results: sqrt_result = %0.2f \t (16'b%b_%b)", $itor(a*(2.0**-8)), a[15:8], a[7:0]);
end

endtask


//------------------- DISPLAY&DROP INPUT -------------------
task print_display_input;
input [2 * `DATA_WIDTH - 1 : 0]  t_act;
input [2 * `DATA_WIDTH - 1 : 0]  t_lim;
input drop_en;

reg [2 * `DATA_WIDTH - 1 : 0]  t1, t2;
reg drop;
begin
	t1 = t_act;
	t2 = t_lim;
	drop = drop_en;
	$write("testing: T_act = %0.2f, T_lim = %0.2f, drop_en = %0d", $itor(t1*(2.0**-8)), $itor(t2*(2.0**-8)), drop);
end
endtask

//------------------- DISPLAY&DROP OUTPUT -------------------
task print_display_output;
input [6 : 0]  seg1;
input [6 : 0]  seg2;
input [6 : 0]  seg3;
input [6 : 0]  seg4;
input drop_activated;
input error_print;

reg [7 : 0]  s1, s2, s3, s4;
reg drop_act;
begin
	if(!error_print) begin
		convert_dec_to_seven_seg(seg1, s1);
		convert_dec_to_seven_seg(seg2, s2);
		convert_dec_to_seven_seg(seg3, s3);
		convert_dec_to_seven_seg(seg4, s4);
		drop_act = drop_activated;
		$write("-> result: message = %0s%0s%0s%0s, drop_activated = %0d", s1, s2, s3, s4, drop_act);
	end
	else begin
		s1 = seg1;
		s2 = seg2;
		s3 = seg3;
		s4 = seg4;
		drop_act = drop_activated;
		$write("-> result: 7Segments(1-2-3-4) -> %b - %b - %b - %b, drop_activated = %0d", s1[6:0], s2[6:0], s3[6:0], s4[6:0], drop_act);
	end 
end
endtask

task convert_dec_to_seven_seg;
input 	[6 : 0] number;
output 	[7 : 0] letter;

begin
	case(number)
		7'b011_1001 : letter = "C";
		7'b101_1110 : letter = "D";
		7'b111_0110 : letter = "H";
	   	7'b011_1000 : letter = "L";
		7'b101_1100 : letter = "O";
	    7'b111_0011 : letter = "P";
	   	7'b101_0000 : letter = "R";
	    7'b111_1000 : letter = "T";
	 	7'b000_0000 : letter = " ";
	endcase
end
endtask

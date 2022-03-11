`define DATA_WIDTH 8

module test;

wire[2*`DATA_WIDTH - 1 : 0] ref_out, tst_out;
wire[`DATA_WIDTH - 1 : 0] in;

ref_square_root ref(
  .out(ref_out),
  .in(in)
);

square_root tst(
  .out(tst_out),
  .in(in)
);

tester tester(
  .sensor1_data(), .sensor2_data(), .sensor3_data(), .sensor4_data(),
  .sqrt_in(in), .t_lim_data(), .t_act_data(), .drop_en(),
  .ref_height_out(), .tst_height_out(), 
  .ref_sqrt_out(ref_out), .tst_sqrt_out(tst_out), 
  .ref_seg1(), .ref_seg2(), .ref_seg3(), .ref_seg4(), .ref_drop_activated(),
  .tst_seg1(), .tst_seg2(), .tst_seg3(), .tst_seg4(), .tst_drop_activated()
);

endmodule


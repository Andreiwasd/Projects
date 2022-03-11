`define DATA_WIDTH 2*8

module test;

wire[6 : 0] ref_seven_seg1, ref_seven_seg2, ref_seven_seg3, ref_seven_seg4, tst_seven_seg1, tst_seven_seg2, tst_seven_seg3, tst_seven_seg4;
wire[`DATA_WIDTH - 1 : 0] t_act, t_lim;
wire drop_en, ref_drop_activated, tst_drop_activated;

ref_display_and_drop ref(
  .seven_seg1(ref_seven_seg1),
  .seven_seg2(ref_seven_seg2),
  .seven_seg3(ref_seven_seg3),
  .seven_seg4(ref_seven_seg4),
  .drop_activated(ref_drop_activated),
  .t_act(t_act),
  .t_lim(t_lim),
  .drop_en(drop_en)
);

display_and_drop tst(
  .seven_seg1(tst_seven_seg1),
  .seven_seg2(tst_seven_seg2),
  .seven_seg3(tst_seven_seg3),
  .seven_seg4(tst_seven_seg4),
  .drop_activated(tst_drop_activated),
  .t_act(t_act),
  .t_lim(t_lim),
  .drop_en(drop_en)
);


tester tester(
  .sensor1_data(), .sensor2_data(), .sensor3_data(), .sensor4_data(), 
  .sqrt_in(), .t_lim_data(t_lim), .t_act_data(t_act), .drop_en(drop_en),
  .ref_height_out(), .tst_height_out(),
  .ref_sqrt_out(), .tst_sqrt_out(), 
  .ref_seg1(ref_seven_seg1), .ref_seg2(ref_seven_seg2), .ref_seg3(ref_seven_seg3), .ref_seg4(ref_seven_seg4), .ref_drop_activated(ref_drop_activated),
  .tst_seg1(tst_seven_seg1), .tst_seg2(tst_seven_seg2), .tst_seg3(tst_seven_seg3), .tst_seg4(tst_seven_seg4), .tst_drop_activated(tst_drop_activated)
);

endmodule


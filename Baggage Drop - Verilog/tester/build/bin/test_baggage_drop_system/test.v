`define DATA_WIDTH 8

module test;

wire[6 : 0] ref_seven_seg1, ref_seven_seg2, ref_seven_seg3, ref_seven_seg4, tst_seven_seg1, tst_seven_seg2, tst_seven_seg3, tst_seven_seg4;
wire ref_drop_activated, tst_drop_activated;
wire[`DATA_WIDTH - 1 : 0] sensor1, sensor2, sensor3, sensor4;
wire[2*`DATA_WIDTH - 1 : 0] t_lim;
wire drop_en; 

ref_baggage_drop ref(
  .seven_seg1(ref_seven_seg1),
  .seven_seg2(ref_seven_seg2),
  .seven_seg3(ref_seven_seg3),
  .seven_seg4(ref_seven_seg4),
  .drop_activated(ref_drop_activated),
  .sensor1(sensor1),
  .sensor2(sensor2),
  .sensor3(sensor3),
  .sensor4(sensor4),
  .t_lim(t_lim),		
  .drop_en(drop_en)
);

baggage_drop tst(
  .seven_seg1(tst_seven_seg1),
  .seven_seg2(tst_seven_seg2),
  .seven_seg3(tst_seven_seg3),
  .seven_seg4(tst_seven_seg4),
  .drop_activated(tst_drop_activated),
  .sensor1(sensor1),
  .sensor2(sensor2),
  .sensor3(sensor3),
  .sensor4(sensor4),
  .t_lim(t_lim),		
  .drop_en(drop_en)
);

tester tester(
  .sensor1_data(sensor1), .sensor2_data(sensor2), .sensor3_data(sensor3), .sensor4_data(sensor4), 
  .sqrt_in(), .t_lim_data(t_lim), .t_act_data(), .drop_en(drop_en),
  .ref_height_out(), .tst_height_out(), 
  .ref_sqrt_out(), .tst_sqrt_out(), 
  .ref_seg1(ref_seven_seg1), .ref_seg2(ref_seven_seg2), .ref_seg3(ref_seven_seg3), .ref_seg4(ref_seven_seg4), .ref_drop_activated(ref_drop_activated),
  .tst_seg1(tst_seven_seg1), .tst_seg2(tst_seven_seg2), .tst_seg3(tst_seven_seg3), .tst_seg4(tst_seven_seg4), .tst_drop_activated(tst_drop_activated)
);

endmodule


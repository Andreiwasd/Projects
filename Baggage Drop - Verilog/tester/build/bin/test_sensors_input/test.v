`define DATA_WIDTH 8

module test;

wire[`DATA_WIDTH - 1 : 0] sensor1, sensor2, sensor3, sensor4, ref_height, tst_height;

ref_sensors_input ref(
  .height(ref_height),
  .sensor1(sensor1),
  .sensor2(sensor2),
  .sensor3(sensor3),
  .sensor4(sensor4)
);

sensors_input tst(
  .height(tst_height),
  .sensor1(sensor1),
  .sensor2(sensor2),
  .sensor3(sensor3),
  .sensor4(sensor4)
);

tester tester(
	.sensor1_data(sensor1), .sensor2_data(sensor2), .sensor3_data(sensor3), .sensor4_data(sensor4), 
	.sqrt_in(), .t_lim_data(), .t_act_data(), .drop_en(), 
	.ref_height_out(ref_height), .tst_height_out(tst_height), 
	.ref_sqrt_out(), .tst_sqrt_out(), 
	.ref_seg1(), .ref_seg2(), .ref_seg3(), .ref_seg4(), .ref_drop_activated(),
	.tst_seg1(), .tst_seg2(), .tst_seg3(), .tst_seg4(), .tst_drop_activated()
);
  
endmodule


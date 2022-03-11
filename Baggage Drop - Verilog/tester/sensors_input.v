`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:27:54 11/09/2021 
// Design Name: 
// Module Name:    sensors_input 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module sensors_input(
	output   reg[7 : 0]   height,
   input    [7 : 0]   sensor1,
   input    [7 : 0]   sensor2,
   input    [7 : 0]   sensor3,
   input    [7 : 0]   sensor4);

	always @(*)begin
		if(sensor1 == 0 || sensor3 == 0)begin
			height = sensor2 + sensor4;
			if(height[0] == 1'b1)begin
				height = (sensor2 + sensor4) / 2 + 1;
			end
			else if (height[0] == 1'b0)begin
				height = (sensor2 + sensor4) / 2;
			end
		end
		
		else if(sensor2 == 0 || sensor4 == 0)begin
			height = sensor1 + sensor3;
			if(height[0] == 1'b1)begin
				height = (sensor1 + sensor3) / 2 + 1;
			end
			else if (height[0] == 1'b0)begin
				height = (sensor1 + sensor3) / 2;
			end
		end
		
		else begin
			height = sensor1 + sensor2 + sensor3 + sensor4;
			if(height[1:0] == 2'b10 || height[1:0] == 2'b11)begin
				height =	(sensor1 + sensor2 + sensor3 + sensor4) / 4 + 1;
			end
			else begin
				height =	(sensor1 + sensor2 + sensor3 + sensor4) / 4;
			end
		end
	end

endmodule

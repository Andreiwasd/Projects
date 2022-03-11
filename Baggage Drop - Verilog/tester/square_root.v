`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:51:58 11/05/2021 
// Design Name: 
// Module Name:    square_root 
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
module square_root (
    output [15:0] out,
    input  [7:0] in );
	 
	 reg [31:0] res;
	 reg [31:0] b;
	 reg [31:0] num;
	 integer i;
	 integer j;
	 
	 always @(*) begin
		b = 32'h40000000;
		num = 0;
		num[31:24] = in;
		res = 0;
		
		for(i = 0; i < 16; i = i + 1)begin
			if(b > num)begin
				b = b >> 2;
			end
		end
		
		for(j = 0; j < 16; j = j + 1) begin
			if (b != 0)begin
				if (num >= res + b)begin
					num = num - (res + b);
					res = (res >> 1) + b;
				end
			
				else begin
					res = res >> 1;
				end
				b = b >> 2;
			end
		end
		res = res >> 4;
	 end
	 
	 assign out = res;
	 
endmodule

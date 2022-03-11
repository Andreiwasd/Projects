`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:46:02 11/09/2021 
// Design Name: 
// Module Name:    display_and_drop 
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
module display_and_drop(
	 output   reg[6 : 0]   seven_seg1, 
    output   reg[6 : 0]   seven_seg2,
    output   reg[6 : 0]   seven_seg3,
    output   reg[6 : 0]   seven_seg4,
    output   reg[0 : 0]   drop_activated,
    input    [15: 0]   t_act,
    input 	 [15: 0]   t_lim,
    input  	           drop_en);

	always @(*)begin
	
		if(drop_en == 1)begin            
		   if(t_act <= t_lim)begin    //se indeplinesc toate conditiile de aruncare a pachetului, deci pachetul va fi aruncat
				drop_activated = 1;
				//afisam pe display mesajul DROP
				seven_seg1 = 7'b101_1110;   
				seven_seg2 = 7'b101_0000;
				seven_seg3 = 7'b101_1100;
				seven_seg4 = 7'b111_0011;
			end
			
			//pachetul nu va fi aruncat deoarece condtitia impusa de timpul limita nu este respectata, dar pachetul se afla in aria de acoperire						     
			else if(t_act > t_lim)begin							     
				drop_activated = 0;
				//afisam pe display mesajul HOT
				seven_seg1 = 7'b000_0000;
				seven_seg2 = 7'b111_0110;
				seven_seg3 = 7'b101_1100;
				seven_seg4 = 7'b111_1000;
			end
		end
		
		//conditia de validare a aruncarii pachetului nu este indeplinita -- drop_en = 0
		else if (drop_en == 0)begin
				drop_activated = 0;
				//afisam pe display mesajul COLD
				seven_seg1 = 7'b011_1001;
				seven_seg2 = 7'b101_1100;
				seven_seg3 = 7'b011_1000;
				seven_seg4 = 7'b101_1110;
		end
	end
	
endmodule

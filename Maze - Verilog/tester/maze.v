`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:49:34 11/29/2021 
// Design Name: 
// Module Name:    maze 
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
module maze(
	input 		          		clk,
	input[maze_width - 1:0]                 starting_col, starting_row, // indicii punctului de start
	input  			  				maze_in, 						// ofera informa?ii despre punctul de coordonate [row, col]
	output reg[maze_width - 1:0]            row, col,	 				  // selecteaza un rând si o coloana din labirint
	output reg		  				maze_oe,					    // output enable (activeaza citirea din labirint la rândul ?i coloana date) - semnal sincron	
	output reg			 			maze_we, 				   // write enable (activeaza scrierea în labirint la rândul ?i coloana date) - semnal sincron
	output reg		  				done);		 			  // ie?irea din labirint a fost gasita; semnalul ramane activ 

parameter maze_width = 6;
//starile principale ale automatului
`define ST       			0  //Start
`define CD              1	//Change direction
`define MM              2	//Make Move
`define VM              3	//Verify Move
`define F               4	//Finish

reg [5:0] copieR, copieC;  //copii in care retin starea anterioara
reg [1:0] dir, dr;   
						//0 - Est
					  //1 - Nord
				    //2 - Vest
				   //3 - Sud
    
reg [5:0] state, next_state ;

always @(posedge clk) begin
	if(done == 0) begin
		state <= next_state;
	end
end

always @(*) begin
	 maze_we = 0;
	 maze_oe = 0;
	 done = 0;
	 next_state = `ST;
	 
	 case(state)
			
			`ST: begin       //initializare
				dir = 1;
				dr = 0;
				row = starting_row;
				col = starting_col;
				maze_we = 1;
				copieR = starting_row;
				copieC = starting_col;
				next_state = `MM;
			end
			
			
			`CD: begin   //Schimbare directie
				if(dir == 0) begin
					dir = 1;
					dr = 0;
				end
				
				else if(dir == 1) begin
					dir = 2;
					dr = 1;
				end
				
				else if(dir == 2) begin
					dir = 3;
					dr = 2;
				end
				
				else if(dir == 3) begin
					dir = 0;
					dr = 3;
				end
				next_state = `MM;
			end
			
			
			`MM: begin
				case(dir)
				
					0: begin           //Daca directia este spre Est
						copieR = row; 
						row = row + 1;  //Deplasarea se face spre Sud

					end
					
					1: begin 			 //Daca directia este spre Nord
						copieC = col; 
						col = col + 1;  //Deplasarea se face spre Est
						
					end
					
					2: begin 			 //Daca directia este spre Vest
						copieR = row; 
						row = row - 1;  //Deplasarea se face spre Nord
						
					end

					3: begin 			 //Daca directia este spre Sud
						copieC = col;  
						col = col - 1;  //Deplasarea se face spre Vest
						
					end

				endcase
				maze_oe = 1;
				next_state = `VM;
			end
			
			
			`VM: begin
				if(maze_in == 0)begin
					if(col == 0 || col == 63 || row == 0 || row == 63) begin
						maze_we = 1;
						next_state = `F;
					end
					
					else begin
						copieR = row;
						copieC = col; 
						
						maze_we = 1;
						dir = dr;
						
						//Se modifica dr in functie de noua directie
						if(dir == 0) begin
							dr = 3;
						end
				
						if(dir == 1) begin
							dr = 0;
						end
				
						if(dir == 2) begin
							dr = 1;
						end
				
						if(dir == 3) begin
							dr = 2;
						end
						next_state = `MM;
					end
				end
				
				
				if(maze_in == 1) begin
							row = copieR;
							col = copieC;
							
							next_state = `CD;
				end
			end

			`F: begin
				done = 1; //Am iesit!
			end


	endcase

end

endmodule
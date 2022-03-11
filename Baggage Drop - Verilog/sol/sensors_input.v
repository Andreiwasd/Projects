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
	//verific daca unul din senzorii din perechea formata din 1 si 3 are valoarea 0
	//daca da, media aritmetica va fi fi calculata doar cu valorile celaorlalti doi senzori
		if(sensor1 == 0 || sensor3 == 0)begin         
			height = sensor2 + sensor4;
			if(height[0] == 1'b1)begin                  //verific daca numarul este impar
				height = (sensor2 + sensor4) / 2 + 1;    //daca da, atunci voi adauga 1 la rezultatul impartirii pentru a aproxima la urmatorul intreg
			end
			else if (height[0] == 1'b0)begin
				height = (sensor2 + sensor4) / 2;        //daca nu, atunci nu va fi nevoie de aproximare
			end
		end
		
		//verific daca unul din senzorii din perechea formata din 2 si 4 are valoarea 0
	   //daca da, media aritmetica va fi fi calculata doar cu valorile celaorlalti doi senzori
		else if(sensor2 == 0 || sensor4 == 0)begin 
			height = sensor1 + sensor3;
			if(height[0] == 1'b1)begin                  //verific daca numarul este impar
				height = (sensor1 + sensor3) / 2 + 1;    //daca da, atunci voi adauga 1 la rezultatul impartirii pentru a aproxima la urmatorul intreg
			end
			else if (height[0] == 1'b0)begin
				height = (sensor1 + sensor3) / 2;        //daca nu, atunci nu va fi nevoie de aproximare
			end
		end
		
		//daca niciunul din senzori nu este 0, height va fi calculat cu valorile tuturor senzorilor
		else begin																
			height = sensor1 + sensor2 + sensor3 + sensor4;
			//impartirea cu 4 a unor numere ce au ca ultimi doi biti 10 sau 11, vor produce valori de forma x.5, respectiv x,75,
			//deci va fi nevoie de aproximare la urmatorul intreg -- adaug 1 la rezultatul impartirii
			if(height[1:0] == 2'b10 || height[1:0] == 2'b11)begin           
				height =	(sensor1 + sensor2 + sensor3 + sensor4) / 4 + 1;
			end
			//daca ultimii doi biti sunt 00 sau 01, nu va fi nevoie de aproximare
			else begin
				height =	(sensor1 + sensor2 + sensor3 + sensor4) / 4;
			end
		end
	end

endmodule

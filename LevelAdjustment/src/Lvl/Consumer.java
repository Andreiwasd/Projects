package Lvl;

import java.awt.Color;
import java.awt.image.BufferedImage;
import java.io.File;
import java.io.IOException;

import javax.imageio.ImageIO;

public class Consumer extends Main implements Runnable{
	Buffer buffer;            //element de tip Buffer
	int [][] img = new int[Main.getImageWidth()][Main.getImageHeight()];
	BufferedImage rgbimg = new BufferedImage(Main.getImageWidth(), Main.getImageHeight(), BufferedImage.TYPE_INT_RGB);
	BufferedImage imgbuff = null;
	
	Consumer(Buffer buffer) {
		this.buffer = buffer;
	}
	
	public void Recive() { //Recive segment ce trebuie prelucrat
		for(int i = 0 ; i < 4 ; i++) {										
			imgbuff = buffer.get();
			int start = (int) Math.round(i * (double)Main.getImageHeight()/4); 		
			int end = Math.min((int) Math.round((i + 1) * (double)Main.getImageHeight()/4), Main.getImageHeight()); 		
			for(int j = 0 ; j < Main.getImageWidth() ; j++)
				for(int k = start ; k < end ; k++)
					img[j][k] = imgbuff.getRGB(j,k - start); 
		}
	}
	
	public void Update() { //rescriere imagine
		try {
			File imgOutFile = null;
			imgOutFile = new File(getPath() + "\\" + getOutFile() + ".bmp");
			ImageIO.write(rgbimg, "bmp", imgOutFile);
		} catch(IOException e) {
			System.out.println("Error: " + e);
		}
	}
	@Override
	public void run() {
		
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////
		long startTimeRecive = System.currentTimeMillis();   //timpul de la inceputul portiunii de cod ce face Recive
		
		//apel functie ce face Recive 
		Recive();
		
		long endTimeRecive = System.currentTimeMillis();	    //timpul de la finalizarea Recive-ului
		long totalTimeRecive = endTimeRecive - startTimeRecive;	//timpul total
		
		System.out.println("--Recive in Consumer");
		System.out.println("Start time: " + startTimeRecive + " ms");
		System.out.println("End time: " + endTimeRecive + " ms");
		System.out.println("Total time: " + totalTimeRecive + " ms");
		System.out.println("\n");
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		long startTimeModif = System.currentTimeMillis();	//timpul de la incepera modificarilor

		int nr_px = Main.getImageWidth() * Main.getImageHeight(); //nr total de pixeli din imagine
		int r = 0; //variabila auxiliara necesara pentru calculul mediei culorii rosii
		int g = 0; //variabila auxiliara necesara pentru calculul mediei culorii verde
		int b = 0; //variabila auxiliara necesara pentru calculul mediei culorii albastru
		
		for(int i = 0; i < Main.getImageWidth(); i++) {
			for(int j = 0; j < Main.getImageHeight(); j++) {
				Color color = new Color(img[i][j], true);
				int red = color.getRed();		//valoare culorii rosu a unui pixel
				int green = color.getGreen();	//valoare culorii verde a unui pixel
				int blue = color.getBlue();		//valoare culorii albastru a unui pixel
				
				r += red;
				g += green;
				b += blue;
			}
		}
		int avgr = (r/nr_px); //valoarea medie a valorilor de rosu
		int avgg = (g/nr_px); //valoarea medie a valorilor de verde
		int avgb = (b/nr_px); //valoarea medie a valorilor de albastru
		
		for(int i = 0; i < Main.getImageWidth(); i++) {
			for(int j = 0; j < Main.getImageHeight(); j++) {
				
				Color color = new Color(img[i][j], true);

				int red = color.getRed();		//valoare culorii rosu a unui pixel
				int green = color.getGreen();	//valoare culorii verde a unui pixel
				int blue = color.getBlue();		//valoare culorii albastru a unui pixel
		        
				//orice valori peste valoarea maxima data ca argument vor fi trasnformate in valoarea maxima posibila(255)
				//orice valori sub valoarea minima data ca argument vor fi trasnformate in valoarea minima posibila(0)
				if(red>max) red=255; 
				if(red<min) red=0; 
		        if(green>max) green=255; 
		        if(green<min) green=0;
		        if(blue>max) blue=255; 
		        if(blue<min) blue=0;
		        
		        //voi creste valorile de sub maxim si mai mari decat 128 cu procentul cu care a fost crescut maximul la 255
		        if(red >= 128 && red < max)
		        	red = red + red * (255 - max)/100;
		        if(green >= 128 && green < max)
		        	green = green + green * (255 - max)/100;
		        if(blue >= 128 && blue < max)
		        	blue = blue + blue * (255 - max)/100;
		        
		        //voi scadea valorile de deasupra minimului si mai mici decat 128 cu procentul cu care minimul a fost scazut la 0
		        if(red <= 128 && red > min)
		        	red = red - red * min/100;
		        if(green <= 128 && green > min)
		        	green = green - green * min/100;
		        if(blue <= 128 && blue > min)
		        	blue = blue - blue * min/100;
		        
		        //modificare valori cu ajutorul unei formule pe baza contrastului
		        red = (int)((red - avgr) * contrastLvl / 100) + avgr;
		        green = (int)((green - avgg) * contrastLvl / 100) + avgg;
		        blue = (int)((blue - avgb) * contrastLvl / 100) + avgb;
		        
		        //verificare daca valorile culorilor nu au iesit inafara spectrului
		        if(red>255) red=255; 
		        if(red<0) red=0;
		        if(green>255) green=255; 
		        if(green<0) green=0;
		        if(blue>255) blue=255; 
		        if(blue<0) blue=0;

		        int s = (red + green + blue) / 3; //variabila necesara pentru trasnformarea imaginii in alb-negru
		        if (bw == 0)
		        	color = new Color(red, green, blue); //salvam noile valori ale culorilor 
		        else if (bw == 1)
		        	color = new Color(s, s, s);          //salvam noile valori ale culorilor alb-negru
				
		        img[i][j] = color.getRGB();         //setam noile valori
				rgbimg.setRGB(i, j, img[i][j]); //punem valorile noului pixel inapoi in imagine
			}
		}
		
		long endTimeModif = System.currentTimeMillis();	        //timpul de la finalizarea modificarilor
		long totalTimeModif = endTimeModif - startTimeModif;    //timpul total al modificarii
		
		System.out.println("\n---Modifications complete");
		System.out.println("Start time: " + startTimeModif + " ms");
		System.out.println("End time: " + endTimeModif + " ms");
		System.out.println("Total time: " + totalTimeModif + " ms");
		System.out.println("\n");
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////
		long startTimeUpdate = System.currentTimeMillis();	//timpul de la inceperea scrierii in imagine rezultat
		
		Update();
		
		long endTimeUpdate = System.currentTimeMillis();	//timpul de la incheierea scrierii in imaginea rezultat
		long totalTimeUpdate = endTimeUpdate - startTimeUpdate;	//timpul total pentru scrierea in imaginea rezultat
		
		System.out.println("\n---Update complete");
		System.out.println("Start time: " + startTimeUpdate + " ms");
		System.out.println("End time: " + endTimeUpdate + " ms");
		System.out.println("Total time: " + totalTimeUpdate + " ms");
		System.out.println("\n");
	}
}

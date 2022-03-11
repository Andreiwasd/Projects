package Lvl;
import java.awt.image.BufferedImage;
import java.io.File;
import java.io.IOException;

import javax.imageio.ImageIO;

public class Main extends ThreadManager{
	private static int imageHeight;
	private static int imageWidth;
	public static BufferedImage image = null;

	//////////////////////////////////////////////////////
	//Getters
	public static int getImageHeight() {
		return imageHeight;
	}
	public static int getImageWidth() {
		return imageWidth;
	}
	public static BufferedImage getImage() {
		return image;
	}
	///////////////////////////////////////////////////////
	//Setters
	public static void setImageHeight(int imageHeight) {
		Main.imageHeight = imageHeight;
	}
	public static void setImageWidth(int imageWidth) {
		Main.imageWidth = imageWidth;
	}
	public static void setImage(BufferedImage image) {
		Main.image = image;
	}
	//////////////////////////////////////////////////////
	
	
	public static void main(String[] args) {
		if(args.length != 7) { //verificare numarul de argumente din linia de comanda
			//daca nu sunt suficiente argumente in linia de comanda vom comuta catre citirea de la tastatura
			System.out.println("Insuficient number of arguments");
		    read();
		} 
		else {		
			String pathName = null;
			String pictureName = null;
			String pictureResult = null;
			int contrastLvl= 0;
			int bw = 0;
			int min = 0;
			int max = 255;
			
			pathName = args[0]; 		//introducere path din linie de comanda
			pictureName = args[1];	    //introducere nume imagine linie de comanda
			pictureResult = args[2];	//introducere nume rezultat din linie de comanda
			contrastLvl = Integer.parseInt(args[3]);  //introducere nivel contrast din linia de comanda
			bw = Integer.parseInt(args[4]);			  //introducere valoare 1/0 daca se doreste rezultatul in alb-negru
			min = Integer.parseInt(args[5]);		  //introducere valoare min
			max = Integer.parseInt(args[6]);		  //introducere valoare max
			
			setPath(pathName);				//setare path
			setInfile(pictureName);	        //setare nume imagine
			setOutfile(pictureResult);	    //setare nume rezultat
			setContrastLvl(contrastLvl);    //setare valoare contrast
			setBW(bw);                      //setare bw pt alb-negru
			setMin(min);					//setare valoare min
			setMax(max);					//setare valoare max
		}
		
		
		//Dimensiunile imaginii - numarul de linii si de coloane
		try {
			File imageInFile = null;
			imageInFile = new File(getPath() + "\\" + getInFile() + ".bmp");
			image = ImageIO.read(imageInFile);
			
			setImageWidth(image.getWidth());		//set width (coloane)
			setImageHeight(image.getHeight());	    //setheight (linii)
			
			System.out.println("\n");
			System.out.println("Height (number of lines)   = " + getImageHeight());
			System.out.println("Width  (number of columns) = " + getImageWidth() + "\n");
		} catch(IOException e) {
			System.out.println("Error: " + e);
		}
		
		//Apelare functie threduri
		threadManager();
		
		//Testare metoda abstracta din interfata
		System.out.println("\n+-----------------Method from Interface------------------");
		ThreadManager object = new ThreadManager();
		object.interfaceMessage();
		
		//Testare metoda abstracta din clasa abstracta
		System.out.println("\n+-------------Method from an abstract class--------------");
		object.abstractMethod();
		
		//Testare Varargs
		System.out.println("\n+------------------------Varargs-------------------------");
		ThreadManager.varargs("Test1", "Test2", "Test3", "Test4", "Test5", "Test6", "Test7");
	}
}

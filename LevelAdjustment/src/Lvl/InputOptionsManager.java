package Lvl;

import java.util.Scanner;

//Citire informatii

public abstract class InputOptionsManager implements Interface{
	private static String path; 		//path-ul pentru fisiere
	private static String infile;	    //nume imagine intrare
	private static String outfile;	    //nume imagine rezultat
	protected static int  contrastLvl;  //valoarea contrastului dorit
	protected static int  bw;           //optiune pentru rezultat in alb-negru
	protected static int  min;			//valoarea minima a intervalului culorilor
	protected static int  max;          //valoarea maxima a intervalului culorilor
	
	
	//Getters
	public static String getPath() {
		return path;
	}
	public static String getInFile() {
		return infile;
	}
	public static String getOutFile() {
		return outfile;
	}
	public static int getContrastLvl() {
		return contrastLvl;
	}
	public static int getBW() {
		return bw;
	}
	public static int getMin() {
		return min;
	}
	public static int getMax() {
		return max;
	}
	//////////////////////////////////////////////////////////////////
	
	//Setters
	public static void setPath(String name) {
		path = name;
	}
	public static void setInfile(String name) {
		infile = name;
	}
	public static void setOutfile(String name) {
		outfile = name;
	}
	public static void setContrastLvl(int contrast) {
		contrastLvl = contrast;
	}
	public static void setBW(int value) {
		bw = value;
	}
	public static void setMin(int value) {
		min = value;
	}
	public static void setMax(int value) {
		max = value;
	}
	////////////////////////////////////////////////////////////////////////////////////////
	
	//////////////////////////
	//Citire de la tastatura//
	//////////////////////////
	
	public static void read() {
		Scanner in = new Scanner(System.in);					//Obiect de tip scanner
		
		System.out.print("Path: ");
		path = in.nextLine();									//citire path fisier
		
		System.out.print("Picture name: ");
		infile = in.nextLine();								    //citire nume fisier intrare
		
		System.out.print("Picture result name: ");
		outfile = in.nextLine();								//citire nume fisier iesire
		
		System.out.print("Contrast values should be over 100\n");
		System.out.print("Contrast level: ");
		contrastLvl = Integer.parseInt(in.nextLine());			//citire nivel contrast
		
		System.out.print("Result in black and white? (1=Yes, 0=No): ");
		bw = Integer.parseInt(in.nextLine());		            //citire daca se doreste imagine alb-negru
		
		System.out.print("Insert Min and Max values wanted. If NO modifications wanted set Min to 0 and Max to 255.\n");
		System.out.print("Min value for picture colour: ");
		min = Integer.parseInt(in.nextLine());				    //citire valoare minima
		
		System.out.print("Max value for picture colour: ");
		max = Integer.parseInt(in.nextLine());					//citire valoare maxima
		
		in.close();												//inchidere scanner
	}
	
	public void interfaceMessage() {
		System.out.println("-> Message from method declared in Interface.");
	}
	
	abstract public void abstractMethod();
}

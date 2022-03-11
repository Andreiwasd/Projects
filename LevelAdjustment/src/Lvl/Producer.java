package Lvl;
import java.awt.image.BufferedImage;
public class Producer extends Main implements Runnable{
	Buffer buffer; 
	
	//Constructor
	Producer(Buffer buffer) {
		this.buffer = buffer;
	}
	
	public void Send() { //incarcare segment in buffer
		for (int i = 0 ; i < 4 ; i++) {					
			int start = (int) Math.round(i * (double)Main.getImageHeight()/4);
			int end = Math.min((int) Math.round((i + 1) * (double)Main.getImageHeight()/4), Main.getImageHeight());
			BufferedImage send = Main.image.getSubimage(0, start, Main.getImageWidth(), end - start);
			buffer.put(send);//punere in buffer
		}
	}
	
	@Override
	public void run() {
		int [][] img = new int [Main.getImageWidth()][Main.getImageHeight()];
		
		//Calculare valoarea RGB pentru pixelii din imagine
		for (int i = 0; i < Main.getImageWidth(); i++) {
			for (int j = 0; j < Main.getImageHeight(); j++) {
				img[i][j] = Main.getImage().getRGB(i, j); //salvam pixelii intr-o matrice
			}
		}
		
		long startTimeSend = System.currentTimeMillis(); //timpul de la inceputul Send-ului

		Send();
		
		long endtimeSend = System.currentTimeMillis();   //timpul de la finalul Send-ului
		long totalTimeSend = endtimeSend - startTimeSend;	       //timpul total de trimitere a datelor
		
		System.out.println("\n---Columns sent");
		System.out.println("Start time: " + startTimeSend + " ms");
		System.out.println("End time: " + endtimeSend + " ms");
		System.out.println("Total time: " + totalTimeSend + " ms");
		System.out.println("\n");
	}
	
	public void abstractMethod() {
		
	}
}

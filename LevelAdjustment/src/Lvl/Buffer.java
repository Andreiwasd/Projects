package Lvl;
import java.awt.image.BufferedImage;

public class Buffer extends Main{
	BufferedImage imgbuff = null;
	
	int direction = 1;
	//direction = 1 -> producer pune in buffer
	//direction = 0 -> consumer ia din buffer
	
	int countsend = 1;   //numarul segmentului din imagine pus de producer in buffer
	int countrecive = 1; //numarul segmentului din imagine luat de consumer din buffer
	
	public synchronized void put(BufferedImage value) {
		while(direction == 0) {
			try {
				wait();
			} catch(InterruptedException e) {
				e.printStackTrace();
			}
		}
		
		direction = 0;
		imgbuff = value;	
		System.out.println("Segment " + countsend + "/4 was sent.");
		try {
			Thread.sleep(5);
		} catch(InterruptedException e) {
			e.printStackTrace();
		}
		
		countsend++;	//incrementam count coloana trimisa
		notifyAll();		
	}
	
	public synchronized BufferedImage get() {
		while (direction == 1) {
			try {
				wait();
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
		direction = 1;
		notifyAll();			
		System.out.println("Segment " + countrecive + "/4 was recived.");
		try {
			Thread.sleep(5);
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
		
		countrecive++;	//incrementare count coloane primite
		return imgbuff;	
	}
}

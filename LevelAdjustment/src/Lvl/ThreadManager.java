package Lvl;

public class ThreadManager extends InputOptionsManager{

	@Override
	public void abstractMethod() {
		System.out.println("Message from abstract method.");
	}
	
	public static void threadManager() {
		Buffer buffer = new Buffer();
		
		//creare threaduri Producer si Consumer
		Thread thread_Producer = new Thread(new Producer(buffer)); 
		Thread thread_Consumer = new Thread(new Consumer(buffer)); 
		
		//start threaduri
		thread_Producer.start();	
		thread_Consumer.start();	
		
		//join threaduri
		try {
			thread_Producer.join();
			thread_Consumer.join();
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
	}
	
	public static void varargs(String ...args) {
		System.out.println("Number of arguments used for this method = " + args.length);
	}

}

import java.io.*;
import java.lang.reflect.InvocationTargetException;
import java.util.*;
import java.util.concurrent.BrokenBarrierException;
import java.util.concurrent.CyclicBarrier;
import java.util.concurrent.Semaphore;

public class Tema2 {
    public static int nrWorkeri;
    public static File inFile;
    public static File outFile;
    public static int nrChunk;
    public static int nrFiles;
    public static File[] readFiles;
    public static Map<String, List<String>> task;
    public static Map<String, Dictionar> task2;
    public static Map<String, Reduce> task3;
    public static Map<String, Final> task4;
    public static int nrTasks;
    public static int nrTasks3;
    public static Semaphore semafor = new Semaphore(1);
    public static CyclicBarrier barrier;
    public static int taskCount;
    public static String sep = ";:/?~\\.,><`,[]{}()!@#$%^&- +'=*\"|   \n\r";

    public static void main(String[] args) throws IOException, InterruptedException {
        if (args.length < 3) {
            System.err.println("Usage: Tema2 <workers> <in_file> <out_file>");
            return;
        }
        nrWorkeri = Integer.parseInt(args[0]);
        inFile = new File(args[1]);
        outFile = new File(args[2]);
        nrTasks = 0;
        taskCount = 0;
        barrier = new CyclicBarrier(nrWorkeri + 1);
        Thread[] threads = new Thread[nrWorkeri];


        //---------------------------------------Citire fisier----------------------------------------------------------
        BufferedReader br = new BufferedReader(new FileReader(inFile));
        String line;
        line = br.readLine();
        nrChunk = Integer.parseInt(line);     //Citire nr Chunk
        line = br.readLine();
        nrFiles = Integer.parseInt(line);     //Citire nr fisiere
        readFiles = new File[nrFiles];

        line = br.readLine();
        int i = 0;
        while (line != null) {                //Citire fisiere intrare
            readFiles[i] = new File(line);
            i++;
            line = br.readLine();
        }

        task  = new HashMap<>();
        task2 = new HashMap<>();
        task3 = new HashMap<>();
        task4 = new HashMap<>();
        int currentTask = 1;

        for (File f : readFiles) {
            BufferedReader br1 = new BufferedReader(new FileReader(f));
            int c = 0;
            int nrCitit = 0;
            int offset = 0;
            int currentPoz = 0;

            while((c = br1.read()) != -1) {
                if(nrCitit == 0) {
                    offset = currentPoz;
                }
                nrCitit++;
                currentPoz++;

                if(nrCitit == nrChunk) {
                    List <String> aux = new ArrayList<>();
                    aux.add(f.getName());
                    aux.add(String.valueOf(offset));
                    aux.add(String.valueOf(nrCitit));
                    String taskName = "T" + currentTask;
                    task.put(taskName, aux);
                    nrCitit = 0;
                    currentTask++;
                }

            }
            if(nrCitit != 0) {
                List <String> aux = new ArrayList<>();
                aux.add(f.getName());
                aux.add(String.valueOf(offset));
                aux.add(String.valueOf(nrCitit));
                String taskName = "T" + currentTask;
                task.put(taskName, aux);
                currentTask++;
            }
        }

        nrTasks = task.size();
        nrTasks3 = readFiles.length;

        //-------------------------------------------Start Threaduri----------------------------------------------------
        for (i = 0; i < nrWorkeri; i++) {
            threads[i] = new MyThread(i);
            threads[i].start();
        }
        //--------------------------------------------------------------------------------------------------------------

        //----------------------------------------------Bariera---------------------------------------------------------
        try {
            barrier.await();
        } catch (BrokenBarrierException | InterruptedException e) {
            e.printStackTrace();
        }
        //--------------------------------------------------------------------------------------------------------------


        //------------------------------------------Initializare task3--------------------------------------------------
        int indexTask3 = 1;
        for (File f : readFiles) {
            String taskName = "T" + indexTask3;

            Reduce init = new Reduce();
            for (Map.Entry<String, Dictionar> entry : task2.entrySet()) {
                String nameFile = "";
                String nameFFile = "tests/files/" + f.getName();                    //de modificat
                nameFile = entry.getValue().getNameFile();

                if (nameFFile.equals(nameFile)) {
                    Dictionar aux = entry.getValue();

                    //Map<Integer, Integer>
                    init.addSizes(aux.getDimensiune());

                    //List<String>
                    init.addList(aux.getList());
                }
            }

            init.setNameFile(f.getName());
            task3.put(taskName, init);
            indexTask3++;
        }

        //-------------------------------------------Bariera------------------------------------------------------------
        try {
            barrier.await();
        } catch (BrokenBarrierException | InterruptedException e) {
            e.printStackTrace();
        }
        //--------------------------------------------------------------------------------------------------------------

        //------------------------------------------Join Threaduri------------------------------------------------------
        for (i = 0; i < nrWorkeri; i++) {
            try {
                threads[i].join();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
        //--------------------------------------------------------------------------------------------------------------

        ///=======================================Afisare Taskuri=======================================================

        //----------------------------------------Afisare Task1---------------------------------------------------------
//        System.out.println();
//        for (Map.Entry<String, List<String>> entry : task.entrySet()) {
//            System.out.print(entry.getKey() + ":");
//            List<String> values = entry.getValue();
//            for(String item : values) {
//                System.out.print(item + " ");
//            }
//            System.out.println();
//        }
//      //----------------------------------------Afisare Task2---------------------------------------------------------
//        System.out.println();
//        for (Map.Entry<String, Dictionar> entry : task2.entrySet()) {
//            System.out.println(entry.getKey() + ":" + entry.getValue());
//        }
//      //----------------------------------------Afisare Task3---------------------------------------------------------
//        System.out.println();
//        for (Map.Entry<String, Reduce> entry : task3.entrySet()) {
//            System.out.println(entry.getKey() + ":" + entry.getValue());
//        }
//      //----------------------------------------Afisare Task4---------------------------------------------------------
//        System.out.println();
//        for (Map.Entry<String, Final> entry : task4.entrySet()) {
//            System.out.println(entry.getKey() + ":" + entry.getValue());
//        }
//      //--------------------------------------------------------------------------------------------------------------



        //----------------------------------------Scriere in fisier-----------------------------------------------------
        FileWriter w = new FileWriter(outFile);
        for (Map.Entry<String, Final> entry : task4.entrySet()) {
            for (Map.Entry<String, Final> entry2 : task4.entrySet()) {
                if (entry.getValue().getRang() > entry2.getValue().getRang()) {
                    Final aux = new Final(entry.getValue());
                    Final aux2 = new Final(entry2.getValue());

                    task4.put(entry.getKey(), aux2);
                    task4.put(entry2.getKey(), aux);
                }
            }
        }

        for (Map.Entry<String, Final> entry : task4.entrySet()) {
            w.write(entry.getValue() + "\n");
        }

        w.close();
        //--------------------------------------------------------------------------------------------------------------
    }
}

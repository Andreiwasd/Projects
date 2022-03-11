import java.io.*;
import java.net.Inet4Address;
import java.time.temporal.TemporalAccessor;
import java.util.*;
import java.util.concurrent.BrokenBarrierException;

public class MyThread extends Thread{
    private final int id;
    public String mutex = "mutex";

    public MyThread(int id) {
        this.id = id;
    }

    public int getFibonacciValue (int x) {
        if (x == 1) return 1;
        int f1 = 1;
        int f2 = 1;
        int f3 = 0;
        int count = 2;
        while (count <= x) {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
            count++;
        }
        return f3;
    }

    public void run() {
        for (int indexTask = id + 1; indexTask <= Tema2.nrTasks ; indexTask += Tema2.nrWorkeri) {
            for (Map.Entry<String, List<String>> entry : Tema2.task.entrySet()) {
                if (entry.getKey().equals("T" + indexTask)) {

                    //-----------------------------Declarare variabile--------------------------------------------------
                    List <String> aux = entry.getValue();             //lista auxiliara in care salvam value din Map
                    String nameFile = "tests/files/" + aux.get(0);    //numele fisierului current
                    int offset = Integer.parseInt(aux.get(1));        //offset
                    int dim = Integer.parseInt(aux.get(2));           //dimensiunea ce trebuie citita

                    File f = new File(nameFile);
                    int c = 0;                                        //variabila necesara pentru citire
                    BufferedReader br = null;                         //Declarare BufferedReader pentru citire
                    try {
                        br = new BufferedReader(new FileReader(f));
                    } catch (FileNotFoundException e) {
                        e.printStackTrace();
                    }
                    //--------------------------------------------------------------------------------------------------



                    ////--------------------Citirea incepe de la offset-------------------------------------------------
                    if(offset != 0) {
                        try {
                            br.skip(offset - 1);          //offset - 1   --Pentru a verifica si caracterul anterior
                        } catch (IOException e) {
                            e.printStackTrace();
                        }
                    }
                    //--------------------------------------------------------------------------------------------------



                    //-------------------Numele urmatorului fisier------------------------------------------------------
                    int indexTaskNext = indexTask + 1;      //indexul Taskului viitor
                    String nameFileNext = "";               //numele urmatorului fisier
                    if (indexTask != Tema2.nrTasks) {       //Vom intra in if doar daca nu suntem la ultimul Task
                        List <String> auxNext = new ArrayList<>();    //Lista auxiliara in care preluam valoareaa Map-ului
                        auxNext = Tema2.task.get("T" + indexTaskNext);
                        nameFileNext = "tests/files/" + auxNext.get(0);
                    }
                    //--------------------------------------------------------------------------------------------------



                    //-----------------------------Verificarea caracterului precedent-----------------------------------
                    int countPrev = 0;                         //numarul de caractere citit de Taskul anterior din caracterele Taskului curent
                    char characterPrev = ' ';                  //char pentru a retine caracterul citit
                    List <String> auxPrev = new ArrayList<>(); //lista auxiliara pentru a recupera datele din Map
                    String nameFilePrev = "";                  //numele fisierului anterior
                    int indexTaskPrev = indexTask - 1;         //indexul Taskului anterior

                    if (indexTaskPrev != 0) { //Vom intra in if doar daca nu suntem la primul Task
                        auxPrev = Tema2.task.get("T" + indexTaskPrev);
                        nameFilePrev = "tests/files/" + auxPrev.get(0);

                        if (nameFilePrev.equals(nameFile)) { //Vom intra in if doar daca Taskul anterior a prelucrat si el acelasi fisier
                            try {
                                if (!((c = br.read()) != -1)) break;
                            } catch (IOException e) {
                                e.printStackTrace();
                            }
                            characterPrev = (char) c;
                            if (!Tema2.sep.contains(String.valueOf(characterPrev))) { //daca caracterul anterior nu a fost un separator inseamna ca taskul anterior a citit si din caracterele Taskului curent
                                while (true) {
                                    try {
                                        if (!((c = br.read()) != -1)) break;
                                    } catch (IOException e) {
                                        e.printStackTrace();
                                    }
                                    characterPrev = (char) c;
                                    if (Tema2.sep.contains(String.valueOf(characterPrev))) {
                                        break;         //Citirea se face pana la un separator
                                    }
                                    countPrev++;       //numarul de caractere citite de Taskul anterior creste la fiecare citire
                                }
                                countPrev++;
                            }
                        }
                    }
                    //--------------------------------------------------------------------------------------------------


                    //==================================================================================================
                    String taskName = "RT" + indexTask;

                    int nrCitit = 0;           //numarul de caractere citite
                    char character = ' ';      //caracterul citit
                    String cuvant = "";        //string in care salvam cuvantul citit
                    int dimWord = 0;           //variabila ce retine dimensiunea cuvantului
                    int dimWordPlus = 0;       //variabila ce retine dimensiunea cuvintelor ce se continua si in urmatorul Task

                    Map<Integer, Integer> map = new HashMap<>();
                    List<String> list = new ArrayList<>();
                    Dictionar d = new Dictionar(nameFile, map, list);

                    //----------------------------------Semafor---------------------------------------------------------
                    try {
                        Tema2.semafor.acquire();
                    } catch (InterruptedException e) {
                    }
                    //--------------------------------------------------------------------------------------------------
                    synchronized (mutex) {
                        Tema2.task2.put(taskName, d);            //initializarea noilor Taskuri
                    }

                    //-----------------------------------------Citirea elementelor--------------------------------------

                    while (nrCitit < dim - countPrev) {      //vom citi cu atatea caractere cate au fost citite de Taskul anterior mai putin
                        try {
                            if (!((c = br.read()) != -1)) break;
                        } catch (IOException e) {
                            e.printStackTrace();
                        }
                        character = (char) c;
                        if(!Tema2.sep.contains(String.valueOf(character))) {
                            cuvant += character; //adaugam caracterul la cuvant
                            dimWord++;           //dimensiunea cuvantului creste ddaca nu am intampinat niciun separator
                            dimWordPlus++;
                        }
                        else if(dimWord != 0) {
                            Dictionar d2 = Tema2.task2.get(taskName);  //creem o variabila dde tip dictionar
                            d2.AddPair(dimWord);                       //adaugam dimensiunea cuvantului
                            list.add(cuvant);                          //adaugam cuvantul in lista de cuvinte
                            d2.setList(list);                          //adaugam listaa la dictionar
                            synchronized (mutex) {
                                Tema2.task2.put(taskName, d2);         //adaugam dictionarul la noul Task
                            }
                            dimWord = 0;                               //resetam dimensiunea
                            dimWordPlus = 0;
                            cuvant = "";                               //resetam cuvantul pentru a citi unul nou
                        }
                        nrCitit++;                                     //crestem numarul de caractere citit
                    }
                    //--------------------------------------------------------------------------------------------------
                    //--------------------------------------------------------------------------------------------------
                    if (!cuvant.equals("") && !nameFile.equals(nameFileNext)) {//
                        Dictionar d2 = Tema2.task2.get(taskName);
                        d2.AddPair(dimWord);
                        list.add(cuvant);
                        d2.setList(list);
                        synchronized (mutex) {
                            Tema2.task2.put(taskName, d2);
                        }
                        dimWordPlus = 0;
                        cuvant = "";
                    }
                    //--------------------------------------------------------------------------------------------------
                    //==================================================================================================



                    //==================================Verificare final de cuvant======================================
                    int ok = 0;
                    //--------------------------------------------------------------------------------------------------
                    if(!Tema2.sep.contains(String.valueOf(character))) {//Vom intra in if daca urmatorul caracter nu este separator
                        while (nrCitit < dim - countPrev + 1) {         //vom continua sa citim cu cate un caracter mai mult decat dimensiunea initiala
                            try {
                                if (!((c = br.read()) != -1)) break;
                            } catch (IOException e) {
                                e.printStackTrace();
                            }
                            ok = 1;
                            char character_aux = (char) c;
                            if (!Tema2.sep.contains(String.valueOf(character_aux))) {//vom intra in if daca urmatorul caracter citit nu este un separator
                                cuvant += character_aux;  //vom adauga la cuvant noile caractere citite
                                dimWordPlus++;            //dimensiunea cuvantului va creste
                                dim++;                    //crestem dimensiunea caracterelor care vor trebui citite cu inca unu pentru a-l verifica si pe urmatorul

                            }  //Vom continua acest proces pana la intampinarea unui separator
                            nrCitit++;
                        }
                    }
                    if (ok == 1) {  //Daca am mai citit caractere, atunci vom adauga cuvantul si dimensiunea in Task
                        Dictionar d2 = Tema2.task2.get(taskName);
                        d2.AddPair(dimWordPlus);
                        list.add(cuvant);
                        d2.setList(list);
                        synchronized (mutex) {
                            Tema2.task2.put(taskName, d2);
                        }
                    }
                    //--------------------------------------------------------------------------------------------------
                    //==================================================================================================


                    //-------------Update la lista de cuvinte(dorim sa pastram doar cuvintele de lungime maxima)--------
                    Dictionar d3 = Tema2.task2.get(taskName);              //preluam informatia din Map
                    List<String> listUpdate = new ArrayList<>();           //noua lista ce va contine doar cuvintele de lungime maxima
                    Map<Integer, Integer> mapUpdate = new HashMap<>();
                    mapUpdate = d3.getDimensiune();
                    int dimMax = 0;
                    for (Map.Entry<Integer, Integer> entryUpdate : mapUpdate.entrySet()) { //parcurgem Map-ul din dictionar si cautam dimensiunea maxima
                        if (dimMax < entryUpdate.getKey()) {
                            dimMax = entryUpdate.getKey();
                        }
                    }
                    for (String str : list) {  //parcurgem lista de cuvinte si adaugam in listUpdate doar cuvintele de dimensiune maxima
                        if (str.length() == dimMax) {
                            listUpdate.add(str);
                        }
                    }
                    d3.setList(listUpdate);    //adaugam lista la dictionar
                    synchronized (mutex) {
                        Tema2.task2.put(taskName, d3);             //updatam Mapul de taskuri
                    }
                    //--------------------------------------------------------------------------------------------------


                    //----------------------------Release la semafor----------------------------------------------------
                    Tema2.semafor.release();
                    //--------------------------------------------------------------------------------------------------
                }
            }
        }

        //=========================Bariera inainte de etapa de calcul a rangului========================================
        try {
            Tema2.barrier.await();
        } catch (BrokenBarrierException | InterruptedException e) {
            e.printStackTrace();
        }
        //==============================================================================================================

        //------------------------Bariera pentru a astepta Main-ul sa creeze taskul3------------------------------------
        try {
            Tema2.barrier.await();
        } catch (BrokenBarrierException | InterruptedException e) {
            e.printStackTrace();
        }
        //--------------------------------------------------------------------------------------------------------------

        for (int indexTask = id + 1; indexTask <= Tema2.nrTasks3 ; indexTask += Tema2.nrWorkeri) {
            for (Map.Entry<String, Reduce> entry : Tema2.task3.entrySet()) {
                if (entry.getKey().equals("T" + indexTask)) {
                    Final taskContent = new Final();
                    Reduce auxReduce = new Reduce();    //variabila in caree retin value din entry
                    auxReduce = entry.getValue();
                    taskContent.setNameFile(auxReduce.getNameFile());

                    int dimMax = 0;
                    Map<Integer, Integer> sizes = auxReduce.getSizes();
                        for (Map.Entry<Integer, Integer> entrySizes : sizes.entrySet()) {
                            if(dimMax <= entrySizes.getKey()) {
                                dimMax = entrySizes.getKey();
                            }
                        }

                    int countWordMax = 0;
                    int countWord = 0;
                    int[] frecventa = new int[dimMax + 1];
                    Arrays.fill(frecventa, 0);

                        for (Map.Entry<Integer, Integer> entrySizes : sizes.entrySet()) {
                            if(dimMax == entrySizes.getKey()) {
                                countWordMax += entrySizes.getValue();
                            }
                            if(entrySizes.getValue() != 0) {
                                countWord += entrySizes.getValue();
                            }
                            frecventa[entrySizes.getKey()] += entrySizes.getValue();
                        }

                    float suma = 0;
                    synchronized (mutex) {
                        for (int lungime = 1; lungime < dimMax + 1; lungime++) {  //Calcul Rang
                            suma += getFibonacciValue(lungime) * frecventa[lungime];
                        }
                    }

                    float rang = suma/countWord;
                    taskContent.setRang(rang);

                    taskContent.setLungimeMaxima(dimMax);
                    taskContent.setNrCuvinte(countWordMax);
                    String taskName = "T" + indexTask;
                    synchronized (mutex) {
                        Tema2.task4.put(taskName, taskContent);
                    }
                }
            }
        }
    }
}

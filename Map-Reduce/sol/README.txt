Pentru realizarea acestei teme am contruit 4 Map-uri care reprezinta taskurile pe care threadurile trebuie sa le 
proceseze. Aceste 4 Map-uri sunt:
Map<String, List<String>> task; - T1 → in1.txt, offset 0, dimensiune 10 (“Algoritmi ”)
Map<String, Dictionar> task2;   - RT1 → in1.txt; {9: 1}; (“Algoritmi”)
Map<String, Reduce> task3;      - T2 → in2.txt; {3: 2, 4: 1}; (“mere”)
Map<String, Final> task4;       - T1 → in1.txt, 58.75, 11, 1
 
Au fost contruire 3 noi clase:
Dictionar
-membrii de date: String nameFile;   - numele fisierului
    		  Map<Integer, Integer> dimensiune;  - Map cu lungimea cuvintelor si numarul de aparitii
  		  List<String> list; - lista ce contine cuvintele de lungime maxima
-metode: - toString - necesara pentru afisarea asemanatoare cu cea din enunt;
	 - Settere si Gettere;

Reduce
-membrii de date: String nameFile; - numele fisierului
    		  Map<Integer, Integer> sizes; - Map cu lungimea cuvintelor si numarul de aparitii
    		  List<String> lists; - lista ce contine cuvintele de lungime maxima
    		  int dimensiunea_maxima; - dimensiunea maxima a cuvintelor
-metode: - toString - necesara pentru afisarea asemanatoare cu cea din enunt;
	 - Settere si Gettere;
	 - addSizes - primeste ca parametru un Map si ii va adauga valorile la Map-ul sizes;
	 - computeMaxDimension - parcurge Map-ul sizes si returneaza lungimea maxima a cuvinteelor;
	 - addList - primeste ca parametru o Lista de cuvinte si le adauga la List lists;
	 - eliminateWordsShorterThanMax - elimina din lista de cuvinte acele cuvinte care nu sunt de dimensiune maxima

Final
-membrii de date: String nameFile; - numele fisierului
    		  float rang; - rangul fisierului
    		  int lungimeMaxima; - lungimea maxima a cuvintelor
    		  int nrCuvinte; - numarul dde cuvinte de lungime maxima
-metode: - toString - necesara pentru afisarea asemanatoare cu cea din enunt;
	 - Settere si Gettere;	

--------------------------
Tema2.java - main

-Citesc fisierul de intrare
-Salvez intr-un vector(readFiles) de tip File numele fisierelor text. Salvez dimensiunea chunkului.

Se construieste Map-ul task:
Pentru fiecare fisier din readFiles se realizeaza urmatoarele:
-se declara o serie dee variabile (nrCitit, offset, currentPoz);
-cu ajutorul unui while se citeste fisierul pana la final;
-nrCitit va fi incrementat dupa fiecare citire de caracter;
-atunci cand nrCitit devine egal cu dimensiunea chunk-ului vom contrui o lista de Stringuri in care salvam
offset-ul, numele fisierului din care s-a citit si dimensiunea segmetului citit;
-nrCitit se va reseta iar la urmatoarea iteratie cand nrCitit=0, offsetul va lua valoarea lui currentPoz care este
incrementat in permanenta la fiecare citire.
-daca am ajuns la finalul fisierului si am iesit din while trebuie sa verificam daca au mai fost citite totusi 
niste caractere. Astfel, daca nrCitit este diferit de 0, vom face iarasi o adaugare ca mai sus.

-Se pornesc Threadurile
-Am pus o bariera inainte de contruirea Map task3 deoarece este nevoie ca threadurile sa contruiasca mai intai
Map task2 (task3 combina taskurile din task2).

Initializare task3 - taskurile din task3 sunt taskurile din task2 combinate in functie de fisiere.
-Se parcurge vectorul de fisiere
-Pentru fiecare fisier, parcurgem Map task2 iar daca numele taskului din task2 corespunde cu numele
fisierului pentru care contruim task3, atunci ii vom adauga datele laa acesta.
-Combinarea se realizeaza prin declararea unei noi variabile de tip Reduce si a unei de tip Dictionar.
In Dictionar se preia valoarea dintr-un task din task2. Apoi acea valoare este adaugata in variabila de tip 
Reduce prin metodele addSizes si addList. Dupa ce a fost parcurs tot Map-ul task2 , variabila Reduce va fi
adaaugata in Map-ul task3;

-Bariera necesara pentru a opri threadurile din executie pana cand main-ul termina de construit Map-ul task3
-Join la threaduri
-Codul comentat realiza afisari in consola necesare pentru verificarea pe parcurs a codului

Scrierea in fisier a rezultatului
-Se realizeaza mai intai o ordonare in functie de rang a taskurilor
-Se parcurge Map-ul task4 si se scrie in outFile;

MyThread
-metoda getFibonacciValue- primeste ca parametru un int si returneaza valoarea din sirul Fibonacci cu idexul egal 
cu parametrul;

Metoda run()
Prelucrarea lui task si task2
-Impartirea taskurilor la threaduri se face echilibrat in functie de numarul de task-uri si de id-ul threadului
(numarul de taskuri din task si task2 este egal). Am declarat o variabila numita indexTask care retine indicele
taskului pe care threadul curent trebuie sa-l proceseze.

-Se parcurge Map-ul task iar daca numele taskului coincide cu indexTask atunci acest task trebuie prelucrat de 
threadul curent.
-Se declara o parte din variabile;
-Se retine si numele fisierului viitor deoarece va fi devoie de el la o verificare de mai tarziu.

Deoarece un thread trebuie sa citeasca un cuvant pana la capat chiar daca acesta se continua pe segmentul urmatorului
task, am realizat urmatoarele:
-Citirea incepe de la offset-1. Vom citi un caracter, iar daca acesta este diferit de un separator inseamna 
ca exista posibilitatea sa avem un cuvant care se continua pe segmentul taskului curent. Intr-un while vom citi
pana cand ajungem la un separator si vom numara caracterele. Aceste caractere au fost deja procesate de threadul
care se ocupa de taskul anterior. Numarul de caractere citite(countPrev) de acesta le vom scadea din numarul de caractere pe 
care trebuie sa-l citim pentru segmentul nostru.

Citirea si construirea Map task2
-nrCitit va retine numarul de caractere citite 
-cu un while care se va opri cand nrCitit va fi egal cu dim(numarul de caractere care trebuie citit, valoare
extrasa din Map task) - countPrev. In acest while vom citi cate un caracter. Daca caracterul nu este un separator
atunci acesta se va adauga String-ului numit cuvant si variabila dimWord se va incrementa. Asfel daca avem mai 
multe caractere la rand care nu sunt separatori, acestea se vor adauga la cuvant si in dimWord va fi retinuta 
dimensiunea acestuia. La intampinarea unui separator, cuvantul si va fi adaugat intr-o lista iar aceasta la randul
ei va fi adugata intr-o variabila de tip Dictionar, la fel si dimensiunea cuvantului va fi adaugata la Map-ul 
dictionarului. Dictionarul va fi adaugat la Map-ul task2. Dimensiunea si cuvantul vor fi resetate pentru a continua 
citirea. Dupa ce am iesit din while trebuie sa verificam daca in stringul cuvant nu au mai ramas caractere si daca
urmatorul fisier este diferit de cel curent. Daca cuvantul nu este gol si urmatorul fisier e diferit, atunci trebuie
sa adaugam si ce a ramas in task2. Daca si urmatorul segment este din acelasi fisier se va trece mai departe pastrand
valorile din cuvant si dimensiunea retinuta in dimWordPlus.

Urmeaza sa verificam daca ultimul caracter citit este ddiferit de separator. 
-Daca da, intr-un while care merge atat timp cat neCitit < dim - countPrev + 1(acest lucru permite citirea a inca 
unui caracter). Daca si urmatorul caracter este diferit de separator, com adauga in continuarea cuvantului caracterul
si vom creste pe dim pentru a permite inca o citire. Facem acest lucru pana cand intalnim un separator. Dupa while
adaugam cuvantul si dimensiunea in task2.

Update la lista de cuvinte
-pe parcursul procesului de mai sus am adaugat toate cuvintele in task2. Dar trebuie retinute doar acele cuvinte
de lungime maxima. Vom parcurge Map-ul task2 si vom cauta lungimea maxima pe care o salvam in dimMax.
Parcurgem list(lista de cuvinte din fisier) si vom adauga intr-o lista auxiliara doar acele cuvinte care au
lungimea maxima. Aceasta lista auxiliara o vom adauga peste lista initiala din task2.


Urmeaza prima bariera ce ii va permite main-ului sa treacaa la contruirea lui task3.
Urmeaza a doua bariera care va permite threadurilor sa-si continuie executia dupa ce main-ul a terminat construcita
lui task3.

Prelucrarea lui tas3 si task4
-Impartirea taskurilor la threaduri se face echilibrat in functie de numarul de task-uri si de id-ul threadului
(numarul de taskuri din task3 si task4 este egal). Am declarat o variabila numita indexTask care retine indicele
taskului pe care threadul curent trebuie sa-l proceseze.

Vom parcurge task3 iar daca indexTsk coincide cu numele taskului atunci threadul se va ocupa de acel task.
Au fost decalrate doua variabile auxiliare, una de tip Final care va fi completata si adaugata lui task4, si
o variabila de tip Reduce care va prelua informatiile din task3.

-Se va parcurge Map-ul task3 si vom salva in Reduce value-ul unui task. Vom parcurge Map-ul din cadrul acestei
variabile de tip Reduce si vom cauta lungimea maxima. Vom parcurge din nou acest Map si vom numara de cuvinte
de lungime maxima. In acelasi timp vom numara si numarul total de cuvinte si vom contrui un vector de 
frecventa in care vom retine numarul dde cuvinte pentru fiecare lungime.

-Se va realiza calcului rangului dupa formula din enunt. Cu un for de la 1 la lungimea maxima, vom salva in sum, 
suma produselor dintre valoarea din sirul lui Fibonacci corespunzator lungimii si frecventa aparitiei cuvintelor
de acea lungime. Rangul va fi suma acelor produse impartit la numarul total de cuvinte. 

-Vom adauga in variabila de tip Final rangul, dimensiunea maxima si numarul de aparitii
-Variabila va fi addaugata Map-ului task4.





























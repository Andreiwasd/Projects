Am definit global semnificatia cuvintelor coordonatorX unde X este rankul coordonatorilor 0, 1 si 2.
In prima parte a programului am initializat MPI si am initializat cele 3 tag-uri.
Coordonatorul 0 si workerii acestuia vor transmite mesaje cu tag-ul tag0. La fel procedeaza si ceilalti
doi coordonatori. 
P este indicatorul folosit pentru cerinta BONUS (P = 0 - exista conexiunea intre 0 si 1 / P = 1 - nu exita
conexiunea intre 0 si 1).

1)(P == 0)
---COORDONATOR 
-Fiecare coordonator trebuie sa citeasca din fisierele destinate fiecaruia workerii care ii sunt asignati.
-Lista de rankuri este salvata in vectorul numit v_rank_workeri ce are dimensiune nr_workeri (pentru
fiecare coordonator este folosita aceasta notatie).
-Dupa ce vectorul cu rankul workerilor este contruit acesta este transmis catre ceilalti doi 
coordonatori astfel: -este transmisa marimea vectorului;
		     -este trimis vectorul tinand cont de dimensiunea acestuia.
-Coordonatorul primeste de la ceilalti doi coordonatori vectorii lor de rankuri ale workerilor acestora 
impreuna cu dimensiunile lor in variabilele nr_workeriX, v_workeriX, unde X ia valoarea celorlalti doi
coordonatori. (Exemplu: coorddonatorul1 va salva in v_workeri0 si v_workeri2 rankurile workerilor 
coordonatorilor 0, respectiv 2).
-In acest punct, toti cei 3 coordonatori cunosc topologia si o afiseaza dupa formatul din enunt.
-Fiecare coordonator va trimite nr_workeri, v_rank_workeri si nr_workeriX, v_workeriX catre workerii lor.

---WORKER
-Fiecare worker va primi cele 6 valori (vectorii ce indica workerii fiecarui coordonator si marimile
acestora) trimise de la coordonatorul sau.
-Fiecare worker va salva rankul si tagul cu care are voie sa comunice in variabilele my_coordonator si 
my_tag.
-Acestia acum pot afisa topologia.

2)(P == 0)
---COORDONATOR 0 - acesta are rolul de a genera vectorul si de a-l imparti in mod cat mai echilibrat 
celorlalti coordonatori.
-se genereaza vectorul de N elemente v, unde v[i] = i;
-se calculeaza numarul total de workeri iar cu ajutorul acestuia se calculeaza nr de elemente pe care
un worker ar trebui sa le prelucreze(nr_elemente_worker).
-se calculeaza numarul de elemente pe care le vor primi fiecare coordonator(nr_elem_vX, unde X este 
coordonatorul) pe baza urmatoarei formule: nr_elem_vX = nr_elemente_worker * nr_workeriX.
-pentru asigurarea unei impartiri cat mai echilibrate ale vectorului chiar si atunci cand numarul de 
elemente ale acestuia nu este un multiplu de numarul de workeri, se vor realiza urmatoarele:
	-calculam restul impartirii lui N la nr. total de workeri si il vom salva in dif;
	-atat timp cat acest rest va fi mai mare decat 2, atunci il vom putea imparti la numarul de
	coordonatori, deci vom creste cu dif numarul de elemente care trebuiesc prelucrate pentru fiecare
	coordonator.
	-in cazul in care au ramas mai putin de 3 elemente dar mai mult de 0, atunci aceste elemente
	vor fi asignate coordonatorului cu cel mai mare numar de workeri.
-Se vor creea 3 vectori de dimensiunile calculate anterior in care se vor salva segmente din vectorul
initial v.
-Doi dintre acesti vectori vor fi transmisi catre ceilalti doi coordonatori.

---COORDONATOR 1 2
-Se primesc vectorii care trebuie prelucrati impreuna cu dimensiunea acestora.

---COORDONATOR 0 1 2 -Aceasta etapa are rolul de a imparti intr-un mod cat mai echilibrat vectorul 
primit catre workeri
-In urma etapelor anterioare fiecare Coordonator are un vector numit vX (unde X este reprezinta rankul 
coordonatorului)
-In nr_elem se salveaza numaarul de elemente pe care un worker ar trebui sa le prelucreze
(nr_elem = nr_elem_v0 / nr_workeri)
-In diferenta este salvat restul acestei impartiri urmand ca aceasta sa fie impartita
-Se va creea un vector care va retine numarul de elemente ale fiecarui worker(v_nr_elem)
ce va fi initializat cu nr_elem;
-Se va parcurge vectorul de workeri pana la valoarea lui "diferenta" si v_nr_elem al workerului
va fi incrementat, asftel elementele in plus vor fi impartite unu cate unu la fiecare worker.
-Se va parcurge vectorul de workeri si pentru fiecare se va creea un vector numit v_send ce va avea
ca dimensiune, valoare din v_nr_elem corespunzatoare workerului. Acest vector v_send va copia valorile
din vX (cu ajutotul lui count);
---WORKERI
-Fiecare worker va primi vectorul si dimensiunea acestuia si va inmulti valorile acestuia si il v-a trimite 
inapoi coordonatorului sau.
---COORDONATOR 0 1 2
-coordonatorii primesc vectorii inapoi de la workeri si vor suprascrie valorile din vX.
---COORDONATOR 1 2
-Acesti doi coordonatori vor trimite inapoi coordonatorului 0 vectorul prelucrat vX.
---COORDONATOR 0
-Coordonatorul 0 va suprascrie valorile din v cu noile valori din vX si va afisa acest vector

BONUS)
-pentru a realiza bonusul am pus if (P==0) la toate sendurile si reciveurile dintre coordonatori
deja existe.
-pe ramura else ale acestora s-au realizat urmatoarele:
	-Coordonatorul 0 si 1 vor face send-uri doar catre coordonatorul 2; Toate reciveurile se 
	vor realiza tot de la coordonatorul 2 (toate sendurile  si reciveurile raman neschimbate cu 
exceptia campurilor de destinatie/sursa si de tag). 
	-Coordonatorul 2 va fi responsabil de trimiterea si primirea vectorilor de rankuri ale workerilor
de la ceilalti doi coordonatori. 
	-Coordonatorul 2 va primi si vX al coordonatorului 1 de la coordonatorul 0 pe care va trebui
sa-l trimita acestuia. De asemenea va primi inapoi de la acesta vectorul prelucrat pe care va trebui
sa-l trimita coordonatorului 0.
	Programul trece cu succes de primele 9 teste ale checker-ului (primele 3 cerinte). A patra cerinta este rezolvata partial,
	reusind sa stocheze intr-o lista primele 8 echipe.
	
	Programul contine 6 clase:
	
	Clasa Player:	Contine membrii de date: firstName, secondnName(sting), points(double) si urmator(Player*) - folosit pentru 
	parcurgere dearece am realizat o lista de playeri pentru fiecare echipa. In ceea ce priveste metodele clasa contine trei 
	constructori, destructor si setere si getere pentru fiecare membru de date.
	
	Clasa Echipa:	Contine membrii de date: nr_playeri(int)-numarul de playeri din echipa, nume_echipa(string), p(Player*) - pointer 
	catre primul jucator din lista de jucatori a echipei, urmator(Echipa*) - folosit pentru parcurgere dearece am realizat o lista 
	de echipe. Clasa contine doi constructori, destructor , getMedie(ce returneaza media punctajelor jucatorilor) si setere si getere
	pentru fiecare membru de date.
	
	Clasa Lista_Echipe:	  Contine membrii de date: nr_echipe(int) - numarul de echipe, e(Echipa*) - pointer catre prima echipa din 
	lista de echipe. Ca metode am implementat doi constructori, functiile de afisare recursiva(afisareRecursiv),
	addEchipa(adauga o echipa la lista), removeEchipa(elimina o echipa din lista), removeFirst(elimina prima echipa din lista),
	removeNechipe(ce rezolva cerinta 2), getPutere(returneaza cea mai mare putere a lui 2 < numarul de echipe), seter pt numarul
	de echipe si getere pentru toti membrii de date.
	
	Clasa Meciuri:	  Contine membrii de date: coada_meciuri(Coada*) - in care este stocata coada de meciuri, 
	versus(Echipa*) - stiva auxiliara pe care am folosit-o pentru afisarea inversa a cozii de meciuri, castigatori, 
	invinsi(Echipa*) - stive in care sunt stocati castigatorii, respectiv invinsii dupa fiecare meci, nr_echipe(int) - numarul de echipe.
	Metodele din aceasta clasa sunt:
					- constructorul: pune lista de echipe in coada de meciuri ;
					
					- campionat: Apeland functia meci, realizeaza meciuri intre echipe pana cand raman doar 8 echipe in coada dupa care 
					acestea sunt stocate intr-o lista top8. In continuare se apeleaza functia de meci pana cand ramane o singura echipa 
					in coada. In final, daca cerinta presupune acest lucru, se va afisa top8;
					
					- Meci: Aceasta metoda va lua doua echipe din coada de echipe, le va aduga in stiva versus si le va compara mediile,
					iar pe cea cu media mai mare o pune in stiva de castigatori iar pe cealalta in stiva de invinsi;
					
					- pushcastigatori: adauga o echipa in stiva de castigatori;
					
					- pushinvinsi: adauga o echipa in stiva de invinsi;
					
					- pushversus: adauga o echipa in stiva versus;
					
					- popcastigatori: elimina o echipa in stiva de castigatori;
					
					- popinvinsi: elimina o echipa in stiva de invinsi;
					
					- popversus: elimina o echipa in stiva versus;
					
					- afisareversus: afiseaza continutul stivei versus;
					
					- afisarewin: afiseaza continutul stivei de castigatori;
					
	Clasa Coada: 	Constine membrii de date: nr_echipe(int)- nr de echipe, e(Echipa*) - prima echipa din coada, u(Echipa*) - ultima 
	echipa din coada. Metodele acestei clase sunt: doi constuctori, removeFirst(sterge prima echipa din coada), seter si geter pentru 
	numarul de echipe, seter si geter pentru ultimul nod, si geter pentru primul nod.
	
	Clasa ArboreB:  Contine membrii de date t(Echipa*) - o echipa din nod, left(ArboreB*) - fiul stang, right(ArboreB*) - fiul drept.
				Metode: setere si getere pentru toti membrii de date, un constructor, newNode - creeaza un nou nod, insert - insereaza un nod,
				insertall - insereaza o lista de echipe in arbore si afisareArbore- care afiseaza arborele.
				Nu reusesc sa afisez arborele dupa inserare. Reusesc doar sa afisez in timpul inserarii.
					
	
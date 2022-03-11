#pragma once
#include "Lista_Echipe.h"
#include "Coada.h"
#include "ArboreB.h"
class Meciuri:public Lista_Echipe
{
	Coada* coada_meciuri;
	Echipa* versus;
	Echipa* castigatori;
	Echipa* invinsi;
	int nr_echipe;
public:
	Meciuri(Echipa*, int);
	void campionat(ofstream &, int); ///CERINTA 3
	void Meci(ofstream &); ///scoate doua echipe din coada si pune in stiva corespunzatoare
	void pushcastigatori(Echipa*);
	void pushversus(Echipa*);
	void pushinvinsi(Echipa*);
	void popcastigatori();
	void popinvinsi();
	void popversus();
	void afisareversus(ofstream &, int);
	void afisarewin(ofstream &, int);
};


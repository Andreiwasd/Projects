#include "Meciuri.h"
#pragma once
Meciuri::Meciuri(Echipa* x, int nr)
{
	coada_meciuri = new Coada;
	Echipa* nod = new Echipa;
	Echipa* nod2 = new Echipa;
	nr_echipe = nr;
	this->coada_meciuri->getPrim()->setNr_player(x->getNr_player());
	nod = coada_meciuri->getUltim();
	nod2 = x;
	Echipa* aux = new Echipa;
	Echipa* aux2 = new Echipa;
	aux = coada_meciuri->getUltim()->getUrmator();
	aux2 = x->getUrmator();
	nod->setNr_player(nod2->getNr_player());
	nod->setNume_echipa(nod2->getNume_echipa());
	nod->setPlayerLista(nod2->getLista_Player(), nod2->getNr_player());
	nod->setUrmator();
	
	for (int i = 1; i < nr_echipe; i++)
	{	
		aux = new Echipa;
		aux->setNr_player(aux2->getNr_player());
		aux->setNume_echipa(aux2->getNume_echipa());
		aux->setPlayerLista(aux2->getLista_Player(),aux2->getNr_player());
		aux->setUrmator();
		nod->setUrmator(aux);
		nod = aux;
		nod2 = aux2;
		aux = aux->getUrmator();
		aux2 = aux2->getUrmator();
	}

	coada_meciuri->setUltim(nod);
	castigatori = new Echipa;
	invinsi = new Echipa;
	versus = new Echipa;
}

void Meciuri::Meci(ofstream &fo)
{
	Echipa* team1 = new Echipa;
	Echipa* team2 = new Echipa;

	team1->setPlayerLista(coada_meciuri->getPrim()->getLista_Player(), coada_meciuri->getPrim()->getNr_player());
	team1->setNr_player(coada_meciuri->getPrim()->getNr_player());
	team1->setNume_echipa(coada_meciuri->getPrim()->getNume_echipa());
	coada_meciuri->removeFirst();

	team2->setPlayerLista(coada_meciuri->getPrim()->getLista_Player(), coada_meciuri->getPrim()->getNr_player());
	team2->setNr_player(coada_meciuri->getPrim()->getNr_player());
	team2->setNume_echipa(coada_meciuri->getPrim()->getNume_echipa());
	coada_meciuri->removeFirst();

	pushversus(team1);
	pushversus(team2);
	double medie1, medie2;
	medie1 = team1->getMedie();
	medie2 = team2->getMedie();
	if (medie1 >= medie2)
	{
		pushcastigatori(team1);
		pushinvinsi(team2);
	}
	else
	{
		pushcastigatori(team2);
		pushinvinsi(team1);
	}
}

void Meciuri::afisarewin(ofstream &fo, int n)
{
	coada_meciuri = new Coada;
	Echipa* t = new Echipa;
	
	//punem ceea ce este in castigatori in t
	Echipa* r = new Echipa;
	r = coada_meciuri->getUltim();
	for (int i = 0; i < n; i++)
	{
		if (t->getNume_echipa() == "")
		{
			t = new Echipa;
			t->setNr_player(castigatori->getNr_player());
			t->setNume_echipa(castigatori->getNume_echipa());
			t->setPlayerLista(castigatori->getLista_Player(), castigatori->getNr_player());
			t->setUrmator();

			coada_meciuri->setNr_echipe(n); ////////////////////////////////
			coada_meciuri->getPrim()->setNr_player(castigatori->getNr_player());
			coada_meciuri->getPrim()->setNume_echipa(castigatori->getNume_echipa());
			coada_meciuri->getPrim()->setPlayerLista(castigatori->getLista_Player(), castigatori->getNr_player());
			coada_meciuri->setUltim(coada_meciuri->getPrim());
			popcastigatori();
			popinvinsi();
		}
		else 
		{
			Echipa* aux = new Echipa;
			aux->setNr_player(castigatori->getNr_player());
			aux->setNume_echipa(castigatori->getNume_echipa());
			aux->setPlayerLista(castigatori->getLista_Player(), castigatori->getNr_player());
			aux->setUrmator(t);
			t = aux;
			
			Echipa* k = new Echipa;
			//punem varful din castigatori in coada meciuri
			k->setNr_player(castigatori->getNr_player());
			k->setNume_echipa(castigatori->getNume_echipa());
			k->setPlayerLista(castigatori->getLista_Player(), castigatori->getNr_player());
			//stergem varful din castigatori
			popcastigatori();
			popinvinsi();
			r->setUrmator(k);
			k->setUrmator();
			r = k;
			coada_meciuri->setUltim(r);
		}
	}
	
	Echipa* p = t;
	Echipa* q = p;
	for (int i = 0; i < n; i++)
	{
		fo << p->getNume_echipa() << setw(37 - p->getNume_echipa().length()) << " -  " << setprecision(2) << fixed << p->getMedie() << endl;
		p = p->getUrmator();
		delete q;
		q = p;
	}
	delete q;
}

void Meciuri::afisareversus(ofstream &fo, int n)
{
	for(int i = 0; i < n; i+=2)	
	{
		fo << versus->getNume_echipa() << setw(35 - versus->getNume_echipa().length()) << " - ";
		popversus();
		fo << setw(34 - 2) << versus->getNume_echipa();
		fo << endl;
		popversus();
	}
}

void Meciuri::pushversus(Echipa* x)
{
	if (versus->getNume_echipa() == "")
	{
		versus = new Echipa;
		versus->setNr_player(x->getNr_player());
		versus->setNume_echipa(x->getNume_echipa());
		versus->setPlayerLista(x->getLista_Player(), x->getNr_player());
		versus->setUrmator();
	}
	else 
	{
		Echipa* aux = new Echipa;
		aux->setNr_player(x->getNr_player());
		aux->setNume_echipa(x->getNume_echipa());
		aux->setPlayerLista(x->getLista_Player(), x->getNr_player());
		aux->setUrmator(versus);
		versus = aux;
	}
}

void Meciuri::pushcastigatori(Echipa* x)
{
	Player* y = x->getLista_Player();
	double med1 = 1.0;// / x->getNr_player();

	for (int i = 0; i < x->getNr_player(); i++)
	{
		y->setPoints(y->getPoints() + med1);
		y = y->getUrmator();
	}
	if (castigatori->getNume_echipa() == "")
	{
		castigatori = new Echipa;
		castigatori->setNr_player(x->getNr_player());
		castigatori->setNume_echipa(x->getNume_echipa());
		castigatori->setPlayerLista(x->getLista_Player(), x->getNr_player());
		castigatori->setUrmator();
	}
	else 
	{
		Echipa* aux = new Echipa;
		aux->setNr_player(x->getNr_player());
		aux->setNume_echipa(x->getNume_echipa());
		aux->setPlayerLista(x->getLista_Player(), x->getNr_player());
		aux->setUrmator(castigatori);
		castigatori = aux;
	}
}

void Meciuri::pushinvinsi(Echipa* x)
{
	if (invinsi->getNume_echipa() == "")
	{
		invinsi = new Echipa;
		invinsi->setNr_player(x->getNr_player());
		invinsi->setNume_echipa(x->getNume_echipa());
		invinsi->setPlayerLista(x->getLista_Player(), x->getNr_player());
		invinsi->setUrmator();
	}
	else
	{
		Echipa* aux = new Echipa;
		aux->setNr_player(x->getNr_player());
		aux->setNume_echipa(x->getNume_echipa());
		aux->setPlayerLista(x->getLista_Player(), x->getNr_player());
		aux->setUrmator(invinsi);
		invinsi = aux;
	}
}

void Meciuri::popversus()
{
	if (versus->getUrmator() == NULL) {
		delete versus;
	}
	else {
		Echipa* nod = versus->getUrmator();
		delete versus;
		versus = nod;
	}
}

void Meciuri::popcastigatori()
{
	if (castigatori->getUrmator() == NULL) {
		delete castigatori;
	}
	else {
		Echipa* nod = castigatori->getUrmator();
		delete castigatori;
		castigatori = nod;
	}
}

void Meciuri::popinvinsi()
{
	if (invinsi->getUrmator() == NULL) {
		delete invinsi;
	}
	else {
		Echipa* nod = invinsi->getUrmator();
		delete invinsi;
		invinsi = nod;
	}
}

void Meciuri::campionat(ofstream &fo, int u)
{
	fo << endl;
	int round = 1;
	while (nr_echipe > 8)
	{
		if (round != 1)
			fo << endl;
		int nr_aux = nr_echipe / 2;
		fo << "--- ROUND NO:" << round <<endl;
		while (nr_echipe > 0)
		{
			Meci(fo);
			nr_echipe-=2; 
		}
		afisareversus(fo, nr_aux*2);
		fo << endl;
		fo << "WINNERS OF ROUND NO:"<< round << endl;
		afisarewin(fo, nr_aux);
		round++;
		nr_echipe = nr_aux;
	}
	///Salvam TOP 8 intr-o alta lista
	/*ArboreB* b = new ArboreB();
	if(u == 1)
	{       
        Echipa* k = coada_meciuri->getPrim();
		ArboreB* b = new ArboreB;
		for (int i = 0; i < 8; i++)
		{
			Echipa* top8 = new Echipa;
			top8->setNr_player(k->getNr_player());
			top8->setNume_echipa(k->getNume_echipa());
			top8->setPlayerLista(k->getLista_Player(), k->getNr_player());
			b->insert(b, top8);
			k = k->getUrmator( );
		}
	}*/
	Echipa* top8 = new Echipa;
	top8->setNr_player(coada_meciuri->getPrim()->getNr_player());
	top8->setNume_echipa(coada_meciuri->getPrim()->getNume_echipa());
	top8->setPlayerLista(coada_meciuri->getPrim()->getLista_Player(), coada_meciuri->getPrim()->getNr_player());
	Echipa* tnod = top8;
	Echipa* taux = coada_meciuri->getPrim()->getUrmator();
	for (int i = 1; i < 8; i++)
	{
		Echipa* tnod2 = new Echipa;
		tnod2->setNr_player(taux->getNr_player());
		tnod2->setNume_echipa(taux->getNume_echipa());
		tnod2->setPlayerLista(taux->getLista_Player(), taux->getNr_player());
		tnod->setUrmator(tnod2);
		tnod = tnod2;
		taux = taux->getUrmator();
	}
	
	///Continuam meciurile
	versus = new Echipa;
	while(nr_echipe > 1)
	{
		fo << endl;
		fo << "--- ROUND NO:" << round <<endl;
		int nr_aux = nr_echipe / 2;
		while (nr_echipe > 0)
		{
			Meci(fo);
			nr_echipe -= 2;
		}
		afisareversus(fo, nr_aux*2);
		fo << endl;
		fo << "WINNERS OF ROUND NO:" << round << endl;
		afisarewin(fo, nr_aux);
		round++;
		nr_echipe = nr_aux;
	}
	/*
	if(u == 1)
	{
		fo << "TOP 8:";
		b->afisareArbore(fo, b);
	}*/
	///Afisam TOP 8
	/*if(u == 1)
	{
		fo << "TOP 8 TEAMS:" << endl;
		Echipa* q = top8;
		for (int i = 0; i < 8; i++)
		{
			fo << q->getNume_echipa() << setw(35 - q->getNume_echipa().length()) << " -  " << setprecision(2) << q->getMedie() << endl;
			q = q->getUrmator();
		}
	}*/
	if(u == 1)
	{
		fo << endl;
		fo << "TOP 8 TEAMS:" << endl;
		ArboreB* ar;
		ar->insertall(fo, ar, top8);
		//ArboreB* copie;
		//copie = ar;
		ar->afisareArbore(fo, ar);
	}
}
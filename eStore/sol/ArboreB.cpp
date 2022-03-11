#include "ArboreB.h"

ArboreB* ArboreB::newNode(ofstream & fo, Echipa* v)
{
	ArboreB* b = new ArboreB;
	b->getEchipa()->setNr_player(v->getNr_player());
	b->getEchipa()->setNume_echipa(v->getNume_echipa());
	b->getEchipa()->setPlayerLista(v->getLista_Player(), v->getNr_player());
	b->setLeft();
	b->setRight();
	return b;
}

ArboreB* ArboreB::insert(ofstream & fo, ArboreB* v, Echipa* p)
{
	if (v == NULL){
		return newNode(fo, p);
	}
	if (p->getMedie() <= v->getEchipa()->getMedie()){
		v->setLeft(insert(fo ,v->getLeft(), p));
	}
	else if(p->getMedie() > v->getEchipa()->getMedie()){
		v->setRight(insert(fo, v->getRight(), p));
	}
	return v;	
}

void ArboreB::insertall(ofstream &fo , ArboreB* b, Echipa* p)
{
	ArboreB* aux = new ArboreB;
	for(int i = 0; i < 8; i++)
	{
		aux = insert(fo, b, p);
		fo << aux->getEchipa()->getNume_echipa() << setw(37 - aux->getEchipa()->getNume_echipa().length()) << " -  " << setprecision(2) << fixed << aux->getEchipa()->getMedie() << endl;
		p = p->getUrmator();
	}
}

void ArboreB::afisareArbore(ofstream & fo, ArboreB* a)
{
	if(1)
	{
		fo << endl;
		fo << a->getEchipa()->getNume_echipa() << setw(37 - a->getEchipa()->getNume_echipa().length()) << " -  " << setprecision(2) << fixed << a->getEchipa()->getMedie() << endl;
		if(a->getLeft()->getEchipa()->getNume_echipa() != "")
			afisareArbore(fo, a->getLeft());
		if(a->getRight()->getEchipa()->getNume_echipa() != "")
			afisareArbore(fo, a->getRight());
	}
	else{
		fo << "eroare";
	}
}
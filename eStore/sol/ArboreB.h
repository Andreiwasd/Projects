#include "Echipa.h"
#pragma once

class ArboreB{
private:
	Echipa* t;
	ArboreB* left;
	ArboreB* right; 
public:
	ArboreB(){t = new Echipa; left = NULL; right = NULL;};
	ArboreB* newNode(ofstream&, Echipa*);
	ArboreB* insert(ofstream &, ArboreB*, Echipa*);
	void insertall(ofstream &, ArboreB*, Echipa*);

	Echipa* getEchipa(){return t;};
	ArboreB* getLeft(){return left;};
	ArboreB* getRight(){return right;};

	void setLeft(ArboreB* l){left->getEchipa()->setNume_echipa(l->getEchipa()->getNume_echipa());};
	void setRight(ArboreB* r){right->getEchipa()->setNume_echipa(r->getEchipa()->getNume_echipa());};
	void setLeft(){left = NULL;};
	void setRight(){right = NULL;};
	
	void afisareArbore(ofstream &, ArboreB*);
};
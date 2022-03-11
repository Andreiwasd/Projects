#include "Echipa.h"
#pragma once
class Coada {
protected:
    int nr_echipe;
    Echipa* e; //primul nod din coada
    Echipa* u; //ultimul nod din coada
public:
    Coada() { nr_echipe = 0; e = new Echipa; u = new Echipa; e = u;};
    Coada(ifstream &);
    void removeFirst(); //sterge prima echipa
    void setNr_echipe(int nr) { nr_echipe = nr; }
    int getNr_echipe() {return nr_echipe;};
    Echipa* getPrim() { return e; };
    Echipa* getUltim() {return u; };
    void setUltim(Echipa* v) { u = v;};
};

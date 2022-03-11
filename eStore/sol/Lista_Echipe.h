#include "Echipa.h"
#pragma once
class Lista_Echipe {
protected:
    int nr_echipe;
    Echipa* e; //primul nod din lista
public:
    Lista_Echipe() { nr_echipe = 0; e = new Echipa; };
    Lista_Echipe(ifstream &);
    //Lista_Echipe(Echipa*, int);
    //void afisareLista(ofstream &);
    void afisareRecursiv(ofstream &, Echipa *); ///CERINTA 1
    void afisareRecursiv(ofstream&);
    //void afisareListaR(ofstream &);
    //void afisareListaR2(ofstream &);
    void addEchipa(Echipa*);
    void removeEchipa(Echipa *); //elimina o echipa din lista
    void removeFirst(); //sterge prima echipa
    void removeNechipe(); //cerinta 2
    int getPutere();
    void setNr_echipe(int nr) { nr_echipe = nr; }
    int getNr_echipe() {return nr_echipe;};
    Echipa* getLista() { return e; };
};

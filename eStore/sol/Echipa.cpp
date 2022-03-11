#include "Echipa.h"
#pragma once
Echipa::Echipa()
{
    nr_player = 0;
    nume_echipa = "";
    this->p = new Player;
    urmator = NULL;
}

Echipa::~Echipa()
{
    nr_player = 0;
    nume_echipa = "";
    p = NULL;
    urmator = NULL;
}

Echipa::Echipa(int nr, string nume)
{
    nr_player = nr;
    nume_echipa = nume;
    this->p = new Player;
    urmator = NULL;
}

/*void Echipa::afisareEchipa(ofstream & fo, Echipa* b)
{
    fo << b->getNume_echipa() << " - " << b->getMedie();
}*/

///GET
double Echipa::getMedie() const
{
    Player* a = this->getLista_Player();
    Player* b = new Player;
    b = a;
    double medie = 0;
    for (int i = 0; i < nr_player; i++)
    {
        double aux;
        aux = b->getPoints();
        medie += aux;
        b = b->getUrmator();
    }
    medie = medie / nr_player;
    return medie;
}

Player* Echipa::getLista_Player() const
{
    return p;
}

Echipa* Echipa::getUrmator() const
{
    return urmator;
}

int Echipa::getNr_player() const
{
    return nr_player;
}

string Echipa::getNume_echipa() const
{
    return nume_echipa;
}
///

///SET
void Echipa::setPlayer(Player* x, int nr)
{
    Player* nod = new Player;
    p->setFirstName(x[0].getFirstName());
    p->setSecondName(x[0].getSecondName());
    p->setPoints(x[0].getPoints());
    nod = p;
    for (int i = 1; i < nr; i++)
    {
        Player* nod2 = new Player;
        nod2->setFirstName(x[i].getFirstName());
        nod2->setSecondName(x[i].getSecondName());
        nod2->setPoints(x[i].getPoints());
        nod->setUrmator(nod2);
        nod = nod2;
    }
}

void Echipa::setPlayerLista(Player* x, int nr)
{
    Player* nod = new Player;
    Player* aux = new Player;
    p->setFirstName(x->getFirstName());
    p->setSecondName(x->getSecondName());
    p->setPoints(x->getPoints());
    nod = p;
    aux = x;
    aux = x->getUrmator();
    for (int i = 1; i < nr; i++)
    {
        Player* nod2 = new Player;
        nod2->setFirstName(aux->getFirstName());
        nod2->setSecondName(aux->getSecondName());
        nod2->setPoints(aux->getPoints());
        nod->setUrmator(nod2);
        nod = nod2;
        aux = aux->getUrmator();
    }
}

void Echipa::setNr_player(int nr)
{
    nr_player = nr;
}

void Echipa::setNume_echipa(string nume)
{
    nume_echipa = nume;
}

void Echipa::setUrmator()
{
    urmator = NULL;
}

void Echipa::setUrmator(Echipa* e)
{
    this->urmator = e;
}
///
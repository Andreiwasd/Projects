#include "Coada.h"

Coada::Coada(ifstream &fi)
{
    fi >> nr_echipe;
    int nr_player, puncte;
    string nume_echipa, nume1, nume2;
    ///citire prima echipa
    fi >> nr_player;
    getline(fi,nume_echipa);
    nume_echipa = nume_echipa.substr(1, nume_echipa.length() - 1);
    e = new Echipa;
    e->setNr_player(nr_player);
    e->setNume_echipa(nume_echipa);
    u = new Echipa;
    u->setNr_player(nr_player);
    u->setNume_echipa(nume_echipa);
    Player* x = new Player[nr_player];
    for (int j = 0; j < nr_player; j++)
    {
        fi >> nume1;
        fi >> nume2;
        fi >> puncte;
        x[j].setFirstName(nume1);
        x[j].setSecondName(nume2);
        x[j].setPoints(puncte);
    }
    e->setPlayer(x, nr_player);
    e->setUrmator();
    u->setPlayer(x, nr_player);
    u->setUrmator();
    ///
    Echipa* nod = new Echipa;
    nod = u;
    for (int i = 1; i < nr_echipe; i++)
    {
        Echipa* aux = new Echipa;
        fi >> nr_player;
        getline(fi, nume_echipa);
        nume_echipa = nume_echipa.substr(1, nume_echipa.length() - 1);
        aux->setNr_player(nr_player);
        aux->setNume_echipa(nume_echipa);
        Player* aux2 = new Player[nr_player];
        for (int j = 0; j < nr_player; j++)
        {
            fi >> nume1;
            fi >> nume2;
            fi >> puncte;
            aux2[j].setFirstName(nume1);
            aux2[j].setSecondName(nume2);
            aux2[j].setPoints(puncte);
        }
        aux->setPlayer(aux2, nr_player);
        aux->setUrmator();
        nod->setUrmator(aux);
        nod = aux;
        u = nod;
    }
}

void Coada::removeFirst()
{
    Echipa* x = e->getUrmator();
    delete e;
    e = x;
}
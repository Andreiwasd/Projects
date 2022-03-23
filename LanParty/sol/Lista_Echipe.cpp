#include "Lista_Echipe.h"

Lista_Echipe::Lista_Echipe(ifstream &fi)
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
    ///
    Echipa* nod = new Echipa;
    nod = e;
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
    }
}

void Lista_Echipe::afisareRecursiv(ofstream& fo, Echipa* x)
{
    if (x->getUrmator() != NULL)
    {
        afisareRecursiv(fo, x->getUrmator());
        fo << x->getNume_echipa() << endl;
    }
    else
    {
        fo << x->getNume_echipa() << endl;
    }
}

void Lista_Echipe::afisareRecursiv(ofstream& fo)
{
    afisareRecursiv(fo, this->e);
}

/*void Lista_Echipe::afisareLista(ofstream &fo)
{
    Echipa* y = new Echipa;
    y = e;
    fo << nr_echipe << endl;
    for (int i = 0; i < nr_echipe; i++)
    {
        Player* a = y->getLista_Player();
        fo << y->getNr_player() << " " << y->getNume_echipa() << endl;
        Player* b = new Player;
        b = a;
        for (int j = 0; j < y->getNr_player(); j++)
        {
            fo << b->getFirstName() << " " << b->getSecondName() << " " << b->getPoints() << endl;
            b = b->getUrmator();
        }
        fo << endl;
        y = y->getUrmator();
    }
}*/

/*void Lista_Echipe::afisareListaR(ofstream &fo)
{
    Echipa* y = new Echipa;
    y = e;
    for (int i = 0; i < nr_echipe; i++)
    {
        fo << y->getNume_echipa() << endl;
        y = y->getUrmator();
    }
}

void Lista_Echipe::afisareListaR2(ofstream &fo)
{
    Echipa* y = new Echipa;
    y = e;
    for (int i = 0; i < nr_echipe; i++)
    {
        fo << y->getNume_echipa() << endl;
        y = y->getUrmator();
    }
}*/

void Lista_Echipe::removeEchipa(Echipa *echipa_minim)
{
    Echipa* x = new Echipa;
    x = e;
    while (x->getUrmator() != echipa_minim)
        x = x->getUrmator();
    x->setUrmator(echipa_minim->getUrmator());
    delete echipa_minim;
}

void Lista_Echipe::removeFirst()
{
    Echipa* x = e->getUrmator();
    delete e;
    e = x;
}

void Lista_Echipe::removeNechipe()
{
    int putere = getPutere();
    while (nr_echipe > putere)
    {
        double medie_minim = e->getMedie();
        Echipa* x = new Echipa;
        Echipa* echipa_minim = new Echipa;
        x = e->getUrmator();
        for (int i = 1; i < nr_echipe; i++)
        {
            double y;
            y = x->getMedie();
            if (y <= medie_minim)
            {
                medie_minim = y;
                echipa_minim = x;
            }
            x = x->getUrmator();
        }
        if(e->getMedie() == medie_minim)
        {
            Echipa* z = e;
            e = e->getUrmator();
            delete z;
        }
        else
            removeEchipa(echipa_minim);
        nr_echipe--;
    }
}

int Lista_Echipe::getPutere()
{
    int n = 1;
    while (n <= nr_echipe)
    {
        n *= 2;
    }
    n = n / 2;
    return n;
}
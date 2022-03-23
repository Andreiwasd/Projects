#include "Player.h"
#pragma once
class Echipa {
private:
    int nr_player;
    string nume_echipa;
    Player* p;
    Echipa* urmator;
public:
    Echipa();
    Echipa(int, string);
    ~Echipa();
    //void afisareEchipa(ofstream &, Echipa* );
    ///get
    int getNr_player() const;
    string getNume_echipa() const;
    Echipa* getUrmator() const;
    Player* getLista_Player() const;
    double getMedie() const;
    ///

    ///set
    void setNr_player(int);
    void setNume_echipa(string);
    void setUrmator(Echipa*);
    void setUrmator();
    void setPlayer(Player*, int);
    void setPlayerLista(Player*, int);
    ///
};

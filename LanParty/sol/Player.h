#include <string.h>
#include <string>
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#pragma once
using namespace std;

class Player {
private:
    string firstName;
    string secondName;
    double points;
    Player* urmator;
public:
    Player();
    Player(string, string, int);
    Player(const Player&);
    ~Player();

    ///get
    string getFirstName() const;
    string getSecondName() const;
    double getPoints() const;
    Player* getUrmator() const;
    ///

    ///set
    void setFirstName(string);
    void setSecondName(string);
    void setPoints(double);
    void setUrmator();
    void setUrmator(Player*);
    ///
};

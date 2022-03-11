#include "Player.h"

Player::Player()
{
    firstName = "";
    secondName = "";
    points = 0;
    urmator = NULL;
}

Player::~Player()
{
    firstName = "";
    secondName = "";
    points = 0;
    urmator = NULL;
}

Player::Player(string prenume, string nume, int puncte)
{
    firstName = prenume;
    secondName = nume;
    points = puncte;
    urmator = NULL;
}

Player::Player(const Player& player)
{
    firstName = player.firstName;
    secondName = player.secondName;
    points = player.points;
}

///GET
string Player::getFirstName() const
{
    return firstName;
}

string Player::getSecondName() const
{
    return secondName;
}

double Player::getPoints() const
{
    return points;
}

Player* Player::getUrmator() const
{
    return urmator;
}
///

///SET
void Player::setFirstName(string nume1)
{
    firstName = nume1;
}

void Player::setSecondName(string nume2)
{
    secondName = nume2;
}

void Player::setPoints(double p)
{
    points = p;
}

void Player::setUrmator()
{
    urmator = NULL;
}

void Player::setUrmator(Player* j)
{
    urmator = j;
}
///
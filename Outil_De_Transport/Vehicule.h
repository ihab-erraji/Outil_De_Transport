#pragma once
#include <iostream>
using namespace std;

class Vehicule
{
protected:
    string Marque;
    int vitesse;

public:
    Vehicule(string, int);
    virtual void afficher();
    virtual ~Vehicule();


};


#pragma once
#include "Vehicule.h"
#include "Moteur.h"

class Voiture : public Vehicule
{
    int*Qte_fuel;
    Moteur* engine;

public:
    Voiture(string,int);
    Voiture(Moteur&, string, int, int);
    virtual void afficher();
    virtual ~Voiture();
};



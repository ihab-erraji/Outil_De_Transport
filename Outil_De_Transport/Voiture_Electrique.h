#pragma once
#include "Voiture.h"


class Voiture_Electrique : public Voiture
{
    int NiveauBatterie;

public:
    Voiture_Electrique(string, int , int);
    void afficher();
    virtual ~Voiture_Electrique();

};

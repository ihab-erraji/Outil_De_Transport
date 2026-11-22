#include "Voiture_Electrique.h"

Voiture_Electrique::Voiture_Electrique(string Marque, int vitesse , int NB) :Voiture(Marque, vitesse), NiveauBatterie(NB)
{
 
}

void Voiture_Electrique::afficher() {

    cout << "Voiture electrique de marque '" << Marque << "' " << "avec la vitesse " << vitesse << "Km/h" << " est niveau de battrie " << NiveauBatterie << "%" << endl;
}


Voiture_Electrique::~Voiture_Electrique()
{
    cout << " Voiture_Electrique destructor" << endl;
}

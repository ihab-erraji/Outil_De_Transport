#include "Vehicule.h"

Vehicule::Vehicule(string marque, int vitesse) :Marque(marque), vitesse(vitesse)
{
    //ctor
}

void Vehicule::afficher() {

    cout << "Vehicule de marque '" << Marque << "' " << "avec la vitesse " << vitesse << "Km/h" << endl;
}

Vehicule::~Vehicule()
{
    cout << " Vehicule destructor" << endl;
}

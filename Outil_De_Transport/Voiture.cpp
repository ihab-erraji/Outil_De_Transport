#include "Voiture.h"


Voiture::Voiture(string Marque, int vitesse):Vehicule(Marque, vitesse)
{
    engine = nullptr;
    Qte_fuel = nullptr;
}

Voiture::Voiture(Moteur& E, string Marque, int vitesse, int Qte_fuel) :Vehicule(Marque, vitesse),Qte_fuel(&Qte_fuel)
{
    engine = new Moteur(E);
}

void Voiture::afficher() {

    cout << "Voiture de marque '" << Marque << "' " << "avec la vitesse " << vitesse << "Km/h";
    cout << " et de "; engine->afficher();

}


Voiture::~Voiture()
{
    delete engine;
    cout << " Voiture destructor" << endl;
}

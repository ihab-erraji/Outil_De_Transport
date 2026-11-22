#include "Moteur.h"
#include <iostream>
using namespace std;

int Moteur::idfollower = 0;
Moteur::Moteur(int a, int p) :id(++idfollower), annee(a), puissance(p) {

}
void Moteur::afficher() {
	cout << "Moteur M" << id << " d'annee " << annee << " et de puissance " << puissance << endl;
}
Moteur::~Moteur() {}

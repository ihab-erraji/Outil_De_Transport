#pragma once
class Moteur {

	const int id;
	static int idfollower;
	int annee;
	int puissance;

public:
	Moteur(int, int);
	void afficher();
	~Moteur();


};



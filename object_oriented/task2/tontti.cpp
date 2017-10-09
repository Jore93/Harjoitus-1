#include <iostream>
#include "tontti.h"



string Tontti::getNimi() {
	return Nimi;
}

void Tontti::setNimi(string nimi) {
	Nimi = nimi;
}


void Tontti::syotaNimi() {
	string nimi;
	cout << "Syötä tontin nimi: " << endl;
	cin >> nimi;
	setNimi(nimi);
}

void Tontti::syotaTiedot() {
	Tontti::syotaNimi();
	Tontti::syotaPituuspiiri();
	Tontti::syotaLeveyspiiri();
	Tontti::syotaPinta_ala();
	Tontti::syotaKerrosten_lkm();
}

void Tontti::tulostaTontti() {
	string nimi;
	nimi = getNimi();
	cout << "Tontin nimi on " << nimi << endl;
}

void Tontti::tulostaTiedot() {
	Tontti::tulostaTontti();
	Tontti::tulostaRakennus();
	Tontti::tulostaSijainti();
}



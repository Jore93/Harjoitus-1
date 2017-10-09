#include <iostream>
#include "tontti.h"


string Tontti::getNimi() {
	return Nimi;
}

void Tontti::setNimi(string nimi) {
	Nimi = nimi;
}


void Tontti::syotaNimi() {
	cout << "Syötä tontin nimi: " << endl;
	string nimi;
	cin >> nimi;
	setNimi(nimi);
}

void Tontti::syotaTiedot() {
	Tontti tontti;

	tontti.syotaNimi();
	tontti.syotaPituuspiiri();
	tontti.syotaLeveyspiiri();
	tontti.syotaPinta_ala();
	tontti.syotaKerrosten_lkm();
}

void Tontti::tulostaTontti() {
	string nimi;
	nimi = getNimi();
	cout << "Tontin nimi on " << nimi << endl;
}

void Tontti::tulostaTiedot() {
	Tontti tontti;

	tontti.tulostaTontti();
	tontti.tulostaRakennus();
	tontti.tulostaSijainti();
}



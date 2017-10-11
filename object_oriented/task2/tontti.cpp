#include <iostream>
#include "tontti.h"



std::string Tontti::getNimi() {
	return Nimi;
}

void Tontti::setNimi(std::string nimi) {
	Nimi = nimi;
}


void Tontti::syotaNimi() {
	std::string nimi;
	std::cout << "Syötä tontin nimi: " << std::endl;
	std::cin >> nimi;
	setNimi(nimi);
}

void Tontti::syotaTiedot() {
	Tontti::syotaNimi();
	Tontti tontti;
	sijainti.syotaPituuspiiri();
	sijainti.syotaLeveyspiiri();
	rakennus.syotaPinta_ala();
	rakennus.syotaKerrosten_lkm();
}

void Tontti::tulostaTontti() {
	std::string nimi;
	nimi = getNimi();
	std::cout << "Tontin nimi on " << nimi << std::endl;
}

void Tontti::tulostaTiedot() {
	tulostaTontti();
	rakennus.tulostaRakennus();
	sijainti.tulostaSijainti();
}



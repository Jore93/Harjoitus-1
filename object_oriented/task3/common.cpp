#include "common.h"
#include <iostream>
#include <string>

void printSubscriptionInvoice(Subscription &subs) {
	std::string tilaajan_nimi, lehden_nimi, toimitusosoite, tyyppi;
	double hinta, laskutettavat_kk;

	tilaajan_nimi = subs.getTilaajanNimi();
	lehden_nimi = subs.getLehdenNimi();
	tyyppi = subs.getTyyppi();
	toimitusosoite = subs.getToimitusosoite();
	laskutettavat_kk = subs.getLaskutettavatKK();
	hinta = subs.getHinta();

	std::cout << std::endl << "Tilaaja: " << tilaajan_nimi << std::endl;
	std::cout << "Lehti: " << lehden_nimi << std::endl;
	std::cout << "Tilauksen tyyppi: " << tyyppi << std::endl;
	std::cout << "Toimitusosoite: " << toimitusosoite << std::endl;
	std::cout << "Laskutettavat kuukaudet: " << laskutettavat_kk << std::endl;
	std::cout << "Tilauksen kokonaishinta: " << hinta << " euroa." << std::endl;
}


#include <iostream>
#include <sstream>
#include <limits>
#include "subscription.h"

// Getters
std::string Subscription::getLehdenNimi() {
	return Lehden_nimi;
}
std::string Subscription::getTilaajanNimi() {
	return Tilaajan_nimi;
}
std::string Subscription::getToimitusosoite() {
	return Toimitusosoite;
}
std::string Subscription::getTyyppi() {
	return Tyyppi;
}
double Subscription::getKuukausihinta() {
	return Kuukausihinta;
}
double Subscription::getLaskutettavatKK() {
	return Laskutettavat_kk;
}
double Subscription::getHinta() {
	return Hinta;
}
// Setters
void Subscription::setLehdenNimi(std::string lehden_nimi) {
	Lehden_nimi = lehden_nimi;
}
void Subscription::setTilaajanNimi(std::string tilaajan_nimi) {
	Tilaajan_nimi = tilaajan_nimi;
}
void Subscription::setToimitusosoite(std::string toimitusosoite) {
	Toimitusosoite = toimitusosoite;
}
void Subscription::setTyyppi(std::string tyyppi) {
	Tyyppi = tyyppi;
}
void Subscription::setKuukausihinta(double kuukausihinta) {
	Kuukausihinta = kuukausihinta;
}
void Subscription::setLaskutettavatKK(double laskutettavat_kk) {
	std::string tyyppi = getTyyppi();
	if(tyyppi == "Kestotilaus") {
		Laskutettavat_kk = 12;
	}
	else {
		Laskutettavat_kk = laskutettavat_kk;
	}
}
void Subscription::setHinta(double hinta) {
	Hinta = hinta;
}

// Methods
void Subscription::syotaTyyppi() {
	std::string tyyppi;
	while(true) {
		std::cout << "Syötä tilauksen tyyppi: " << std::endl;
		std::getline(std::cin, tyyppi);
		if(tyyppi == "Normaalitilaus") {
			setTyyppi(tyyppi);
			return;
		}
		else if(tyyppi == "Kestotilaus") {
			setTyyppi(tyyppi);
			return;
		}
		else {
			std::cout << "Syötä tilauksen tyyppi, joko 'Normaalitilaus' tai 'Kestotilaus'" << std::endl;
		}
	}
}
void Subscription::syotaLehdenNimi() {
	std::string lehden_nimi;
	std::cout << "Syötä lehden nimi: " << std::endl;
	getline(std::cin, lehden_nimi);
	setLehdenNimi(lehden_nimi);
}
void Subscription::syotaTilaajanNimi() {
	std::string tilaajan_nimi;
	std::cout << "Syötä tilaajan nimi: " << std::endl;
	getline(std::cin, tilaajan_nimi);
	setTilaajanNimi(tilaajan_nimi);
}
void Subscription::syotaToimitusosoite() {
	std::string toimitusosoite;
	std::cout << "Syötä toimitusosoite: " << std::endl;
	getline(std::cin, toimitusosoite);
	setToimitusosoite(toimitusosoite);
}
void Subscription::syotaKuukausihinta() {
	double kuukausihinta;
	while(true) {
		std::cout << "Syötä kuukausihinta: " << std::endl;
		std::cin >> kuukausihinta;
		if(!std::cin) {
			std::cout << "Syötä lukuarvo!" << std::endl;
		}
		else if(kuukausihinta < 0) {
			std::cout << "Syötä positiivinen lukuarvo!" << std::endl;
		}
		else {
			break;
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	setKuukausihinta(kuukausihinta);
}
void Subscription::syotaKuukaudet() {
	int kuukaudet;
	std::string tyyppi = getTyyppi();

	if(tyyppi == "Normaalitilaus") {
		while(true) {
			std::cout << "Syötä tilauksen kesto kuukausina: " << std::endl;
			std::cin >> kuukaudet;
			if(!(std::cin)) {
				std::cout << "Syötä kokonaisluku!" << std::endl;
			}
			else if(kuukaudet < 1){
				std::cout << "Syötä kestoksi vähintään 1 kuukausi" << std::endl;
			}
			else {
				break;
			}
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
	else {
		kuukaudet = 12;
	}
																																																																																																																											setLaskutettavatKK(kuukaudet);
}
void Subscription::printInvoice() {
	std::string tilaajan_nimi, lehden_nimi, toimitusosoite;
	double hinta, laskutettavat_kk;

	tilaajan_nimi = getTilaajanNimi();
	lehden_nimi = getLehdenNimi();
	toimitusosoite = getToimitusosoite();
	laskutettavat_kk = getLaskutettavatKK();
	hinta = getHinta();

	std::cout << std::endl << "Tilaaja: " << tilaajan_nimi << std::endl;
	std::cout << "Lehti: " << lehden_nimi << std::endl;
	std::cout << "Toimitusosoite: " << toimitusosoite << std::endl;
	std::cout << "Laskutettavat kuukaudet: " << laskutettavat_kk << std::endl;
	std::cout << "Tilauksen kokonaishinta: " << hinta << " euroa." << std::endl;
}




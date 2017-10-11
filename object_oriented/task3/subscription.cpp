#include <iostream>
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
		std::cin >> tyyppi;
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
	std::cin >> lehden_nimi;
	setLehdenNimi(lehden_nimi);
}
void Subscription::syotaTilaajanNimi() {
	std::string tilaajan_nimi;
	std::cout << "Syötä tilaajan nimi: " << std::endl;
	std::cin >> tilaajan_nimi;
	setTilaajanNimi(tilaajan_nimi);
}
void Subscription::syotaToimitusosoite() {
	std::string toimitusosoite;
	std::cout << "Syötä toimitusosoite: " << std::endl;
	std::cin >> toimitusosoite;
	setToimitusosoite(toimitusosoite);
}
void Subscription::syotaKuukausihinta() {
	double kuukausihinta;
	std::cout << "Syötä kuukausihinta: " << std::endl;
	std::cin >> kuukausihinta;
	setKuukausihinta(kuukausihinta);
}


void printSubscriptionInvoice(Subscription &subs) {
	std::string tilaajan_nimi, lehden_nimi, toimitusosoite, tyyppi;
	double hinta, laskutettavat_kk;

	tilaajan_nimi = subs.getTilaajanNimi();
	lehden_nimi = subs.getLehdenNimi();
	toimitusosoite = subs.getToimitusosoite();
	tyyppi = subs.getTyyppi();
	laskutettavat_kk = subs.getLaskutettavatKK();
	hinta = subs.getHinta();

	std::cout << "Tilaaja: " << tilaajan_nimi << std::endl;
	std::cout << "Lehti: " << lehden_nimi << std::endl;
	std::cout << "Toimitusosoite: " << toimitusosoite << std::endl;
	std::cout << "Tilauksen tyyppi: " << tyyppi << std::endl;
	std::cout << "Laskutettavat kuukaudet: " << laskutettavat_kk << std::endl;
	if(tyyppi == "Normaalitilaus") {
		int tilauksen_kesto = subs.getTilauksenKesto();
		std::cout << "Tilauksen kesto: " << tilauksen_kesto << " kuukautta." << std::endl;
	}
	if(tyyppi == "Kestotilaus") {
		int alennusprosentti = subs.getAlennusprosentti();
		std::cout << "Alennusprosentti: " << alennusprosentti << "%" << std::endl;
	}
	std::cout << "Tilauksen kokonaishinta: " << hinta << " euroa." << std::endl;
}

#include <iostream>
#include "subscription.h"

// Getters
string Subscription::getLehdenNimi() {
	return Lehden_nimi;
}
string Subscription::getTilaajanNimi() {
	return Tilaajan_nimi;
}
string Subscription::getToimitusosoite() {
	return Toimitusosoite;
}
string Subscription::getTyyppi() {
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
void Subscription::setLehdenNimi(string lehden_nimi) {
	Lehden_nimi = lehden_nimi;
}
void Subscription::setTilaajanNimi(string tilaajan_nimi) {
	Tilaajan_nimi = tilaajan_nimi;
}
void Subscription::setToimitusosoite(string toimitusosoite) {
	Toimitusosoite = toimitusosoite;
}
void Subscription::setTyyppi(string tyyppi) {
	Tyyppi = tyyppi;
}
void Subscription::setKuukausihinta(double kuukausihinta) {
	Kuukausihinta = kuukausihinta;
}
void Subscription::setLaskutettavatKK(double laskutettavat_kk) {
	string tyyppi = getTyyppi();
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
	string tyyppi;
	while(true) {
		cout << "Syötä tilauksen tyyppi: " << endl;
		cin >> tyyppi;
		if(tyyppi == "Normaalitilaus") {
			setTyyppi(tyyppi);
			return;
		}
		else if(tyyppi == "Kestotilaus") {
			setTyyppi(tyyppi);
			return;
		}
		else {
			cout << "Syötä tilauksen tyyppi, joko 'Normaalitilaus' tai 'Kestotilaus'" << endl;
		}
	}
}
void Subscription::syotaLehdenNimi() {
	string lehden_nimi;
	cout << "Syötä lehden nimi: " << endl;
	cin >> lehden_nimi;
	setLehdenNimi(lehden_nimi);
}
void Subscription::syotaTilaajanNimi() {
	string tilaajan_nimi;
	cout << "Syötä tilaajan nimi: " << endl;
	cin >> tilaajan_nimi;
	setTilaajanNimi(tilaajan_nimi);
}
void Subscription::syotaToimitusosoite() {
	string toimitusosoite;
	cout << "Syötä toimitusosoite: " << endl;
	cin >> toimitusosoite;
	setToimitusosoite(toimitusosoite);
}
void Subscription::syotaKuukausihinta() {
	double kuukausihinta;
	cout << "Syötä kuukausihinta: " << endl;
	cin >> kuukausihinta;
	setKuukausihinta(kuukausihinta);
}

void Subscription::laskeHinta() {
	string tyyppi = getTyyppi();

	if(tyyppi == "Kestotilaus") {
		int alennusprosentti;
		double hinta, kuukausihinta, laskutettavat_kk;
		StandingSubscription Kestotilaus;

		alennusprosentti = Kestotilaus.getAlennusprosentti();
		kuukausihinta = getKuukausihinta();
		laskutettavat_kk = getLaskutettavatKK();

		hinta = kuukausihinta*(alennusprosentti/100)*laskutettavat_kk;
	}
	if(tyyppi == "Normaalitilaus") {
		int tilauksen_kesto;
		double hinta, kuukausihinta;
		RegularSubscription Normaalitilaus;

		tilauksen_kesto = Normaalitilaus.getTilauksenKesto();
		kuukausihinta = getKuukausihinta();

		hinta = kuukausihinta*tilauksen_kesto;
	}
}

void printSubscriptionInvoice(Subscription &subs) {
	string tilaajan_nimi, lehden_nimi, toimitusosoite, tyyppi;
	double hinta, laskutettavat_kk;

	tilaajan_nimi = subs.getTilaajanNimi();
	lehden_nimi = subs.getLehdenNimi();
	toimitusosoite = subs.getToimitusosoite();
	tyyppi = subs.getTyyppi();
	laskutettavat_kk = subs.getLaskutettavatKK();
	hinta = subs.getHinta();

	cout << "Tilaaja: " << tilaajan_nimi << endl;
	cout << "Lehti: " << lehden_nimi << endl;
	cout << "Toimitusosoite: " << toimitusosoite << endl;
	cout << "Tilauksen tyyppi: " << tyyppi << endl;
	cout << "Laskutettavat kuukaudet: " << laskutettavat_kk << endl;
	if(tyyppi == "Normaalitilaus") {
		int tilauksen_kesto = subs.getTilauksenKesto();
		cout << "Tilauksen kesto: " << tilauksen_kesto << " kuukautta." << endl;
	}
	if(tyyppi == "Kestotilaus") {
		int alennusprosentti = subs.getAlennusprosentti();
		cout << "Alennusprosentti: " << alennusprosentti << "%" << endl;
	}
	cout << "Tilauksen kokonaishinta: " << hinta << " euroa." << endl;
}

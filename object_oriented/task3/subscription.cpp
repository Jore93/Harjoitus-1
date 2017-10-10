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
	Laskutettavat_kk = laskutettavat_kk;
	string tyyppi = getTyyppi();
	if(tyyppi == "Kestotilaus") {
		Laskutettavat_kk = 12;
	}
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
void Subscription::setKuukausihinta() {
	double kuukausihinta;
	cout << "Syötä kuukausihinta: " << endl;
	cin >> kuukausihinta;
	setKuukausihinta(kuukausihinta);
}

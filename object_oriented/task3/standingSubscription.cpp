#include <iostream>
#include "standingSubscription.h"

// Getters
int StandingSubscription::getAlennusprosentti() {
	return Alennusprosentti;
}

// Setters
void StandingSubscription::setAlennusprosentti(int alennusprosentti) {
	Alennusprosentti = alennusprosentti/100;
}

// Methods
void StandingSubscription::syotaAlennusprosentti()  {
	int alennusprosentti;
	cout << "Syötä kestotilauksen alennusprosentti: " << endl;
	cin >> alennusprosentti;
	if(alennusprosentti < 0 || alennusprosentti > 100) {
		alennusprosentti = 0;
	}
	setAlennusprosentti(alennusprosentti);
}

void StandingSubscription::laskeKestoHinta() {
	double hinta, kuukausihinta, laskutettavat_kk;
	int alennusprosentti;

	alennusprosentti = getAlennusprosentti;
	kuukausihinta = StandingSubscription::getKuukausihinta();
	laskutettavat_kk = StandingSubscription::getLaskutettavatKK();

	hinta = kuukausihinta*alennusprosentti*laskutettavat_kk;
	setHinta(hinta);
}

void StandingSubscription::printStandingInvoice() {
	int alennusprosentti = getAlennusprosentti();

	cout << "Alennusprosentti: " << alennusprosentti << "%" << endl;
}




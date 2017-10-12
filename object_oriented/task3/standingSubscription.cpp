#include <iostream>
#include <sstream>
#include <limits>
#include "standingSubscription.h"

// Getters
int StandingSubscription::getAlennusprosentti() {
	return Alennusprosentti;
}

// Setters
void StandingSubscription::setAlennusprosentti(int alennusprosentti) {
	Alennusprosentti = alennusprosentti;
}

// Methods
int StandingSubscription::tilauksenKesto() {
	return Subscription::getLaskutettavatKK();
}
void StandingSubscription::syotaAlennusprosentti()  {
	int alennusprosentti = 0;
	while(true) {
		std::cout << "Syötä kestotilauksen alennusprosentti: " << std::endl;
		std::cin >> alennusprosentti;
		if(!std::cin) {
			std::cout << "Syötä alennusprosentiksi kokonaisluku" << std::endl;
		}
		else if(alennusprosentti < 0 || alennusprosentti > 100) {
			std::cout << "Syötä alennusprostentiksi luku arvo väliltä 0-100" << std::endl;
		}
		else {
			break;
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	setAlennusprosentti(alennusprosentti);
}
void StandingSubscription::laskeKestoHinta() {
	int alennusprosentti;
	double hinta, laskutettavat_kk, kuukausihinta;

	alennusprosentti = StandingSubscription::getAlennusprosentti();
	laskutettavat_kk = StandingSubscription::tilauksenKesto();
	kuukausihinta = StandingSubscription::getKuukausihinta();

	hinta = (kuukausihinta*(100-alennusprosentti)*laskutettavat_kk)/100;
	StandingSubscription::setHinta(hinta);
}



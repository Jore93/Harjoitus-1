#include <iostream>
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
void StandingSubscription::syotaAlennusprosentti()  {
	int alennusprosentti;
	std::cout << "Syötä kestotilauksen alennusprosentti: " << std::endl;
	std::cin >> alennusprosentti;
	if(alennusprosentti < 0 || alennusprosentti > 100) {
		alennusprosentti = 0;
	}
	setAlennusprosentti(alennusprosentti);
}




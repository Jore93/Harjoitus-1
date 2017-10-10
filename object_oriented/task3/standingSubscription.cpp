#include <iostream>
#include "standingSubscription.h"

int StandingSubscription::getAlennusprosentti() {
	return Alennusprosentti;
}

void StandingSubscription::setAlennusprosentti(int alennusprosentti) {
	Alennusprosentti = alennusprosentti;
}

void StandingSubscription::syotaAlennusprosentti()  {
	int alennusprosentti;
	cout << "Syötä kestotilauksen alennusprosentti: " << endl;
	cin >> alennusprosentti;
	if(alennusprosentti < 0 || alennusprosentti > 100) {
		alennusprosentti = 0;
	}
	setAlennusprosentti(alennusprosentti);
}




#include <iostream>
#include "regularSubscription.h"

// Getters
int RegularSubscription::getTilauksenKesto() {
	return Tilauksen_kesto;
}

// Setters
void RegularSubscription::setTilauksenKesto(int tilauksen_kesto) {
	Tilauksen_kesto = tilauksen_kesto;
}

// Methods
void RegularSubscription::syotaTilauksenKesto() {
	cout << "Syötä tilauksen kesto kuukausina: " << endl;
	int tilauksen_kesto;
	cin >> tilauksen_kesto;
	if(tilauksen_kesto < 1) {
		tilauksen_kesto = 0;
	}
	setTilauksenKesto(tilauksen_kesto);
	RegularSubscription::setLaskutettavatKK(tilauksen_kesto);
}
void RegularSubscription::laskeNormaaliHinta() {
	double hinta, kuukausihinta, laskutettavat_kk;

	kuukausihinta = RegularSubscription::getKuukausihinta();
	laskutettavat_kk = RegularSubscription::getLaskutettavatKK();

	hinta = kuukausihinta*laskutettavat_kk;
	RegularSubscription::setHinta(hinta);
}

void RegularSubscription::printRegularInvoice() {
	int tilauksen_kesto = getTilauksenKesto();

	cout << "Tilauksen kesto: " << tilauksen_kesto << " kuukautta." << endl;
}

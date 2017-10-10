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
}

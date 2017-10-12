#include <iostream>
#include <sstream>
#include <limits>
#include "regularSubscription.h"

// Getters
int RegularSubscription::getTilauksenKesto() {
	return Tilauksen_kesto;
}

// Setters
void RegularSubscription::setTilauksenKesto(int tilauksen_kesto) {
	setLaskutettavatKK(tilauksen_kesto);
	Tilauksen_kesto = tilauksen_kesto;
}

// Methods
void RegularSubscription::syotaTilauksenKesto() {
	int tilauksen_kesto = 0;
	while(true) {
		std::cout << "Syötä tilauksen kesto kuukausina: " << std::endl;
		std::cin >> tilauksen_kesto;
		if(!std::cin) {
			std::cout << "Syötä positiivinen lukuarvo" << std::endl;
		}
		else if(tilauksen_kesto < 1) {
			std::cout << "Liian lyhyt tilausaika, anna positiivinen lukuarvo" << std::endl;
		}
		else {
			break;
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	setTilauksenKesto(tilauksen_kesto);
}
void RegularSubscription::laskeNormaaliHinta() {
	int tilauksen_kesto;
	double hinta, kuukausihinta;

	tilauksen_kesto = RegularSubscription::getLaskutettavatKK();
	kuukausihinta = RegularSubscription::getKuukausihinta();
	std::cout << "Tilauksen kesto " << tilauksen_kesto << std::endl << "Kuukausihinta " << kuukausihinta << std::endl;
	hinta = tilauksen_kesto*kuukausihinta;
	RegularSubscription::setHinta(hinta);
}


#include <iostream>
#include "rakennus.h"


// Getters
int Rakennus::getAla() {
	return Ala;
}
int Rakennus::getKerrokset() {
	return Kerrokset;
}

// Setters
void Rakennus::setAla(int pinta_ala) {
	Ala = pinta_ala;
}
void Rakennus::setKerrokset(int kerrosten_lkm) {
	Kerrokset = kerrosten_lkm;
}

// Methods
void Rakennus::syotaPinta_ala() {
	int pinta_ala;
	std::cout << "Syötä rakennuksen pinta-ala neliöinä: " << std::endl;
	std::cin >> pinta_ala;
	setAla(pinta_ala);
}
void Rakennus::syotaKerrosten_lkm() {
	std::cout << "Syötä kerrosten lukumäärä: " << std::endl;
	int kerrosten_lkm;
	std::cin >> kerrosten_lkm;
	setKerrokset(kerrosten_lkm);
}
void Rakennus::tulostaRakennus() {
	int ala, kerrokset;
	ala = getAla();
	kerrokset = getKerrokset();
	if(kerrokset == 1) {
		std::cout << "Rakennuksen pinta-ala on " << ala << " neliötä ja rakennuksessa on " << kerrokset << " kerros." << std::endl;
	}
	else {
		std::cout << "Rakennuksen pinta-ala on " << ala << " neliötä ja rakennuksessa on " << kerrokset << " kerrosta." << std::endl;
	}
}

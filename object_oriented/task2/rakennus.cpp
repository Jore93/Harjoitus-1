#include <iostream>
#include <sstream>
#include <limits>
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
	while(true) {
		std::cin >> pinta_ala;
		if(std::cin.fail()) {
			std::cout << "Syötä pinta-alaksi positiivinen kokonaisluku!" << std::endl;
		}
		else if(pinta_ala < 0) {
			std::cout << "Syötä pinta-alaksi positiivinen kokonaisluku!" << std::endl;
		}
		else {
			setAla(pinta_ala);
			return;
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}
void Rakennus::syotaKerrosten_lkm() {
	int kerrosten_lkm;
	while(true) {
		std::cout << "Syötä kerrosten lukumäärä: " << std::endl;
		std::cin >> kerrosten_lkm;
		if(!(std::cin)) {
			std::cout << "Syötä kerrosten lukumääräksi positiivinen kokonaisluku!" << std::endl;
		}
		else if(kerrosten_lkm < 0) {
			std::cout << "Syötä kerrosten lukumääräksi positiivinen kokonaisluku!" << std::endl;
		}
		else {
			setKerrokset(kerrosten_lkm);
			return;
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
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

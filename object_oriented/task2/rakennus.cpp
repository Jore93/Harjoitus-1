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
	cout << "Syötä rakennuksen pinta-ala neliöinä: " << endl;
	cin >> pinta_ala;
	setAla(pinta_ala);
}
void Rakennus::syotaKerrosten_lkm() {
	cout << "Syötä kerrosten lukumäärä: " << endl;
	int kerrosten_lkm;
	cin >> kerrosten_lkm;
	setKerrokset(kerrosten_lkm);
}
void Rakennus::tulostaRakennus() {
	int ala, kerrokset;
	ala = getAla();
	kerrokset = getKerrokset();
	if(kerrokset == 1) {
		cout << "Rakennuksen pinta-ala on " << ala << " neliötä ja rakennuksessa on " << kerrokset << " kerros." << endl;
	}
	else {
		cout << "Rakennuksen pinta-ala on " << ala << " neliötä ja rakennuksessa on " << kerrokset << " kerrosta." << endl;
	}
}

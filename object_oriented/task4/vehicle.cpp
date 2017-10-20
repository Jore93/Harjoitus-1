#include "vehicle.h"
#include <iostream>
#include <sstream>
#include <limits>

// Getters
std::string Vehicle::getMerkki() {
	return AjoneuvonMerkki;
}
int Vehicle::getValmistusvuosi() {
	return Valmistusvuosi;
}
int Vehicle::getAjetutKilometrit() {
	return AjetutKilometrit;
}
// Setters
void Vehicle::setMerkki(std::string ajoneuvonMerkki) {
	AjoneuvonMerkki = ajoneuvonMerkki;
}
void Vehicle::setValmistusvuosi(int valmistusvuosi) {
	Valmistusvuosi = valmistusvuosi;
}
void Vehicle::setAjetutKilometrit(int ajetutKm) {
	AjetutKilometrit = ajetutKm;
}
// Methods
void Vehicle::syotaMerkki() {
	std::string ajoneuvonMerkki;
	std::cout << "Syötä ajoneuven merkki: " << std::endl;
	std::cin >> ajoneuvonMerkki;
	setMerkki(ajoneuvonMerkki);
}
void Vehicle::syotaValmistusvuosi() {
	int valmistusvuosi;
	while(true) {
		std::cout << "Syötä ajoneuvon valmistusvuosi: " << std::endl;
		std::cin >> valmistusvuosi;
		if(!std::cin) {
			std::cout << "Syötä vuosi kokonaislukuna!" << std::endl;
		}
		else if(valmistusvuosi < 0) {
			std::cout << "Syötä vuodeksi positiivinen kokonaisluku" << std::endl;
		}
		else {
			break;
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	setValmistusvuosi(valmistusvuosi);
}
void Vehicle::syotaAjetutKilometrit() {
	int kilometrit;
	while(true) {
		std::cout << "Syötä ajoneuvon ajettujen kilometrien määrä: " << std::endl;
		std::cin >> kilometrit;
		if(!std::cin) {
			std::cout << "Syötä kilometrit kokonaislukuna!" << std::endl;
		}
		else if(kilometrit < 0) {
			std::cout << "Syötä kilometreiksi positiivinen kokonaisluku" << std::endl;
		}
		else {
			break;
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	setAjetutKilometrit(kilometrit);
}

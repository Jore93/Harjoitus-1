#include <iostream>
#include "sijainti.h"



std::string Sijainti::getLeveyspiiri() {
	return Leveyspiiri;
}
std::string Sijainti::getPituuspiiri() {
	return Pituuspiiri;
}

// Setters
void Sijainti::setLeveyspiiri(std::string leveyspiiri) {
	Leveyspiiri = leveyspiiri;
}
void Sijainti::setPituuspiiri(std::string pituuspiiri) {
	Pituuspiiri = pituuspiiri;
}

// Methods
void Sijainti::syotaLeveyspiiri() {
  std::cout << "Syötä leveyspiiri: " << std::endl;
  std::string leveyspiiri;
  std::cin >> leveyspiiri;
  setLeveyspiiri(leveyspiiri);
}
void Sijainti::syotaPituuspiiri() {
	std::cout << "Syötä pituuspiiri: " << std::endl;
	std::string pituuspiiri;
	std::cin >> pituuspiiri;
	setPituuspiiri(pituuspiiri);
}
void Sijainti::tulostaSijainti() {
	std::string pituuspiiri = Sijainti::getPituuspiiri();
	std::string leveyspiiri = Sijainti::getLeveyspiiri();
	std::cout << "Sijainti on " << leveyspiiri << " astetta leveyttä ja " << pituuspiiri << " astetta pituutta." << std::endl;
}

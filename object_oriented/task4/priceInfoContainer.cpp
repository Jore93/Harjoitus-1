#include "priceInfoContainer.h"
#include <iostream>
#include <sstream>
#include <limits>

std::vector <PriceInfo> PriceInfoContainer::getHintatietoVektori() {
	return priceInfoVector;
}
PriceInfo PriceInfoContainer::getHintatieto() {
	return priceInfo;
}
void PriceInfoContainer::setHintatietoVektori(PriceInfo hintaOlio) {
	priceInfoVector.push_back(hintaOlio);
}
void PriceInfoContainer::setHintatieto(PriceInfo priceinfo) {
	priceInfo = priceinfo;
}
void PriceInfoContainer::lisaaHintatieto() {
	Vehicle vehicle;
	PriceInfo price;

	vehicle.syotaMerkki();
	vehicle.syotaValmistusvuosi();
	vehicle.syotaAjetutKilometrit();
	price.syotaAjoneuvonHinta();
	price.setVehicle(vehicle);
	setHintatieto(price);
}
void PriceInfoContainer::tulostaSailio() {
	PriceInfoContainer price;
	PriceInfo olio;
	Vehicle vehicle;
	std::string merkki;
	double kilometrit, vuosi, hinta;

	for(std::vector<PriceInfo>::iterator i=priceInfoVector.begin(); i != priceInfoVector.end(); i++) {
		olio = *i;
		hinta = olio.getAjoneuvonHinta();
		vehicle = olio.getVehicle();
		merkki = vehicle.getMerkki();
		vuosi = vehicle.getValmistusvuosi();
		kilometrit = vehicle.getAjetutKilometrit();

		std::cout <<  "Merkki: "<< merkki << std::endl;
		std::cout <<  "Valmistusvuosi: "<< vuosi << std::endl;
		std::cout <<  "Ajetut kilometrit: "<< kilometrit << std::endl;
		std::cout <<  "Hinta: "<< hinta << std::endl;
	}
}
void PriceInfoContainer::tulostaLiianKalliit() {
	double hinta, raja;
	while(true) {
		std::cout << "Syötä hinta: " << std::endl;
		std::cin >> hinta;
		if(!std::cin) {
			std::cout << "Syötä lukuarvo!" << std::endl;
		}
		else if(hinta < 0) {
			std::cout << "Syötä positiivinen lukuarvo!" << std::endl;
		}
		else {
			raja = priceInfo.getAjoneuvonHinta();
			if(raja <= hinta) {
				std::cout << "Ajoneuvot:" << std::endl;
			}
			break;
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}
void PriceInfoContainer::tulostaSopivat() {
	double hinta, raja;
	while(true) {
		std::cout << "Syötä hinta: " << std::endl;
		std::cin >> hinta;
		if(!std::cin) {
			std::cout << "Syötä lukuarvo!" << std::endl;
		}
		else if(hinta < 0) {
			std::cout << "Syötä positiivinen lukuarvo!" << std::endl;
		}
		else {
			raja = priceInfo.getAjoneuvonHinta();
			if(raja > hinta) {
				std::cout << "Ajoneuvot:" << std::endl;
			}
			break;
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}


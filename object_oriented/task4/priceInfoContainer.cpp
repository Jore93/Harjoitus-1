#include "priceInfoContainer.h"
#include <iostream>
#include <sstream>
#include <limits>

PriceInfoContainer::PriceInfoContainer() {
	setHintatietoVektori("", 0, 0, 0);
}
PriceInfoContainer::PriceInfoContainer(std::string merkki, int vuosimalli, int ajetutKM, double hinta) {
	setHintatietoVektori(merkki, vuosimalli, ajetutKM, hinta);
}
PriceInfoContainer::~PriceInfoContainer() {

}

std::vector <PriceInfo*> PriceInfoContainer::getHintatietoVektori() {
	return priceInfoVector;
}

void PriceInfoContainer::setHintatietoVektori(std::string merkki, int vuosimalli, int ajetutKM, double hinta) {
	if(merkki != "" && vuosimalli != 0 && ajetutKM != 0 && hinta != 0) {
		priceInfoVector.push_back(new PriceInfo(merkki, vuosimalli, ajetutKM, hinta));
	}
}

void PriceInfoContainer::lisaaHintatieto() {
	Vehicle vehicle;
	PriceInfo price;

	vehicle.syotaMerkki();
	vehicle.syotaValmistusvuosi();
	vehicle.syotaAjetutKilometrit();
	price.syotaAjoneuvonHinta();
	setHintatietoVektori(vehicle.getMerkki(), vehicle.getValmistusvuosi(), vehicle.getAjetutKilometrit(), price.getAjoneuvonHinta());
}
void PriceInfoContainer::tulostaSailio() {
	PriceInfo* olio;
	Vehicle vehicle;
	std::string merkki;
	int vuosi, kilometrit;
	double hinta;

	for(std::vector<PriceInfo*>::iterator i=priceInfoVector.begin(); i != priceInfoVector.end(); i++) {
		olio = *i;
		hinta = olio->getAjoneuvonHinta();
		vehicle = olio->getVehicle();
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
	PriceInfo* olio;
	Vehicle vehicle;
	std::string merkki;
	int vuosi, kilometrit;
	double hinta, raja;
	while(true) {
		std::cout << "Syötä maksimihinta: " << std::endl;
		std::cin >> raja;
		if(!std::cin) {
			std::cout << "Syötä lukuarvo!" << std::endl;
		}
		else if(raja < 0) {
			std::cout << "Syötä positiivinen lukuarvo!" << std::endl;
		}
		else {
			for(std::vector<PriceInfo*>::iterator i=priceInfoVector.begin(); i != priceInfoVector.end(); i++) {
				olio = *i;
				hinta = olio->getAjoneuvonHinta();
				vehicle = olio->getVehicle();
				merkki = vehicle.getMerkki();
				vuosi = vehicle.getValmistusvuosi();
				kilometrit = vehicle.getAjetutKilometrit();

				if(raja < hinta) {
					std::cout <<  "Merkki: "<< merkki << std::endl;
					std::cout <<  "Valmistusvuosi: "<< vuosi << std::endl;
					std::cout <<  "Ajetut kilometrit: "<< kilometrit << std::endl;
					std::cout <<  "Hinta: "<< hinta << std::endl;
				}
			}
			break;
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}
void PriceInfoContainer::tulostaSopivat() {
	PriceInfo* olio;
	Vehicle vehicle;
	std::string merkki;
	int vuosi, kilometrit;
	double hinta, raja;
	while(true) {
		std::cout << "Syötä maksimihinta: " << std::endl;
		std::cin >> raja;
		if(!std::cin) {
			std::cout << "Syötä lukuarvo!" << std::endl;
		}
		else if(raja <= 0) {
			std::cout << "Syötä positiivinen lukuarvo!" << std::endl;
		}
		else {
			for(std::vector<PriceInfo*>::iterator i=priceInfoVector.begin(); i != priceInfoVector.end(); i++) {
				olio = *i;
				hinta = olio->getAjoneuvonHinta();
				vehicle = olio->getVehicle();
				merkki = vehicle.getMerkki();
				vuosi = vehicle.getValmistusvuosi();
				kilometrit = vehicle.getAjetutKilometrit();

				if(raja > hinta) {
					std::cout <<  "Merkki: "<< merkki << std::endl;
					std::cout <<  "Valmistusvuosi: "<< vuosi << std::endl;
					std::cout <<  "Ajetut kilometrit: "<< kilometrit << std::endl;
					std::cout <<  "Hinta: "<< hinta << std::endl;
				}
			}
			break;
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}


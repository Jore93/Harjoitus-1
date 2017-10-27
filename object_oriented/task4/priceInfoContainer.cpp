#include "priceInfoContainer.h"
#include <iostream>
#include <sstream>
#include <limits>

PriceInfoContainer::PriceInfoContainer() {
}
PriceInfoContainer::~PriceInfoContainer() {

}

std::vector <PriceInfo*> PriceInfoContainer::getHintatietoVektori() {
	return priceInfoVector;
}

void PriceInfoContainer::setHintatietoVektori(std::string merkki, int vuosimalli, int ajetutKM, double hinta) {
	priceInfoVector.push_back(new PriceInfo(merkki, vuosimalli, ajetutKM, hinta));
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
double PriceInfoContainer::kysyHinta() {
	while(true) {
		double raja;
		std::cout << "Syötä maksimihinta: " << std::endl;
		std::cin >> raja;
		if(!std::cin) {
			std::cout << "Syötä lukuarvo!" << std::endl;
		}
		else if(raja <= 0) {
			std::cout << "Syötä positiivinen lukuarvo!" << std::endl;
		}
		else {
			return raja;
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}
void PriceInfoContainer::tulostaSailio() {
	PriceInfo* olio;
	Vehicle* vehicle;
	std::string merkki;
	int vuosi, kilometrit;
	double hinta;

	for(std::vector<PriceInfo*>::iterator i=priceInfoVector.begin(); i != priceInfoVector.end(); i++) {
		olio = *i;
		hinta = olio->getAjoneuvonHinta();
		vehicle = olio->getVehicle();
		merkki = vehicle->getMerkki();
		vuosi = vehicle->getValmistusvuosi();
		kilometrit = vehicle->getAjetutKilometrit();
		if(!(merkki == "" && vuosi == 0 && kilometrit == 0 && hinta == 0)) {
		std::cout <<  "Merkki: "<< merkki << std::endl;
		std::cout <<  "Valmistusvuosi: "<< vuosi << std::endl;
		std::cout <<  "Ajetut kilometrit: "<< kilometrit << std::endl;
		std::cout <<  "Hinta: "<< hinta << std::endl << std::endl;
		}
	}
}
void PriceInfoContainer::tulostaLiianKalliit(double raja) {
	PriceInfo* olio;
	Vehicle* vehicle;
	std::string merkki;
	int vuosi, kilometrit;
	double hinta;

	std::cout << "Ajoneuvot jotka ovat kalliimpia kuin " << raja << " euroa" << std::endl << std::endl;
	for(std::vector<PriceInfo*>::iterator i=priceInfoVector.begin(); i != priceInfoVector.end(); i++) {
		olio = *i;
		hinta = olio->getAjoneuvonHinta();
		vehicle = olio->getVehicle();
		merkki = vehicle->getMerkki();
		vuosi = vehicle->getValmistusvuosi();
		kilometrit = vehicle->getAjetutKilometrit();

		if(raja < hinta) {
			std::cout <<  "Merkki: "<< merkki << std::endl;
			std::cout <<  "Valmistusvuosi: "<< vuosi << std::endl;
			std::cout <<  "Ajetut kilometrit: "<< kilometrit << std::endl;
			std::cout <<  "Hinta: "<< hinta << std::endl << std::endl;
		}
	}
}
void PriceInfoContainer::tulostaSopivat(double raja) {
	PriceInfo* olio;
	Vehicle* vehicle;
	std::string merkki;
	int vuosi, kilometrit;
	double hinta;

	std::cout << "Ajoneuvot jotka ovat halvempia kuin " << raja << " euroa" << std::endl << std::endl;
	for(std::vector<PriceInfo*>::iterator i=priceInfoVector.begin(); i != priceInfoVector.end(); i++) {
		olio = *i;
		hinta = olio->getAjoneuvonHinta();
		vehicle = olio->getVehicle();
		merkki = vehicle->getMerkki();
		vuosi = vehicle->getValmistusvuosi();
		kilometrit = vehicle->getAjetutKilometrit();

		if(raja > hinta) {
			std::cout <<  "Merkki: "<< merkki << std::endl;
			std::cout <<  "Valmistusvuosi: "<< vuosi << std::endl;
			std::cout <<  "Ajetut kilometrit: "<< kilometrit << std::endl;
			std::cout <<  "Hinta: "<< hinta << std::endl << std::endl;
		}
	}
}


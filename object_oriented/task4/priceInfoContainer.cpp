#include "priceInfoContainer.h"
#include <iostream>
#include <sstream>
#include <limits>
#include <stdlib.h>

std::vector <PriceInfo> PriceInfoContainer::getHintatietoVektori() {
	return priceInfoVector;
}
PriceInfo PriceInfoContainer::getHintatieto() {
	return priceInfo;
}
/*std::vector <PriceInfo> *PriceInfoContainer::initHintatietoVektori() {
	std::vector <PriceInfo> *ret = calloc(1, sizeof(PriceInfo));
	return ret;
}*/
void PriceInfoContainer::setHintatietoVektori(std::vector <PriceInfo> priceInfoVec) {
	priceInfoVector = priceInfoVec;
}
void PriceInfoContainer::setHintatieto(PriceInfo priceinfo) {
	priceInfo = priceinfo;
}
void PriceInfoContainer::lisaaHintatieto() {
	Vehicle vehicle;
	vehicle.syotaMerkki();
	vehicle.syotaValmistusvuosi();
	vehicle.syotaAjetutKilometrit();
	priceInfo.syotaAjoneuvonHinta();
}
void PriceInfoContainer::tulostaSailio() {
	for(uint i = 0; i<priceInfoVector.size(); i++) {
		std::cout << "Hintatietovektorit" /*priceInfoVector[i]*/ << std::endl;
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


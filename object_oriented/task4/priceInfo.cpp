#include "priceInfo.h"
#include <iostream>
#include <sstream>
#include <limits>

PriceInfo::PriceInfo() {
	setAjoneuvonHinta(0);
	setVehicle(new Vehicle("", 0, 0));
}
PriceInfo::PriceInfo(std::string merkki, int vuosimalli, int ajetutKM, double ajoneuvonHinta) {
	setAjoneuvonHinta(ajoneuvonHinta);
	setVehicle(new Vehicle(merkki, vuosimalli, ajetutKM));
}
PriceInfo::~PriceInfo() {

}

double PriceInfo::getAjoneuvonHinta() {
	return AjoneuvonHinta;
}
Vehicle PriceInfo::getVehicle() {
	return *Ajoneuvo;
}
void PriceInfo::setAjoneuvonHinta(double ajoneuvonHinta) {
	AjoneuvonHinta = ajoneuvonHinta;
}
void PriceInfo::setVehicle(Vehicle* ajoneuvo) {
	Ajoneuvo = ajoneuvo;
}
void PriceInfo::syotaAjoneuvonHinta() {
	double hinta;
	while(true) {
		std::cout << "Syötä ajoneuvon hinta: " << std::endl;
		std::cin >> hinta;
		if(!std::cin) {
			std::cout << "Syötä hinta kokonaislukuna!" << std::endl;
		}
		else if(hinta < 0) {
			std::cout << "Syötä hinnaksi positiivinen kokonaisluku" << std::endl;
		}
		else {
			break;
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	setAjoneuvonHinta(hinta);
}


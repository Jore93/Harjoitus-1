#include "priceInfo.h"

Vehicle vehicle;
double AjoneuvonHinta;

double PriceInfo::getAjoneuvonHinta() {
	return AjoneuvonHinta;
}
void PriceInfo::setAjoneuvonHinta(double ajoneuvonHinta) {
	AjoneuvonHinta = ajoneuvonHinta;
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


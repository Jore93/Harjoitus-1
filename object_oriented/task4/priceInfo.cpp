#include "priceInfo.h"

Vehicle vehicle;
double AjoneuvonHinta;

double PriceInfo::getAjoneuvonHinta() {
	return AjoneuvonHinta;
}
void PriceInfo::setAjoneuvonHinta(double ajoneuvonHinta) {
	AjoneuvonHinta = ajoneuvonHinta;
}


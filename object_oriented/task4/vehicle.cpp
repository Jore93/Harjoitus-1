#include "vehicle.h"


std::string Vehicle::getMerkki() {
	return AjoneuvonMerkki;
}
int Vehicle::getValmistusvuosi() {
	return Valmistusvuosi;
}
int Vehicle::getAjetutKilometrit() {
	return AjetutKilometrit;
}

void Vehicle::setMerkki(std::string ajoneuvonMerkki) {
	AjoneuvonMerkki = ajoneuvonMerkki;
}
void Vehicle::setValmistusvuosi(int valmistusvuosi) {
	Valmistusvuosi = valmistusvuosi;
}
void Vehicle::setAjetutKilometrit(int ajetutKm) {
	AjetutKilometrit = ajetutKm;
}

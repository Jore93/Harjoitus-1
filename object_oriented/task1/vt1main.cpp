#include <iostream>
#include "pankkitili.h"

int main() {
	Pankkitili Tili;
	std::string omistaja;
	std::string tilinumero;
	double saldo;
	std::string vast;
	std::string vastaus;

	omistaja = Tili.getOmistaja();
	tilinumero = Tili.getTilinumero();
	saldo = Tili.getSaldo();

	Tili.syotaTilinOmistaja();
	Tili.syotaTilinumero();
	Tili.syotaTilinSaldo();
	while(true) {
		while(true) {

			Tili.tulostaTilinTiedot();
			std::cout << "Haluatko tehdä noston vai panon? Kirjoita 'Otto' tai 'Pano'" << std::endl;
			std::cin >> vast;
			if(vast == "Otto") {
				Tili.otto();
				Tili.tulostaTilinTiedot();
				break;
			}
			if(vast == "Pano") {
				Tili.pano();
				Tili.tulostaTilinTiedot();
				break;
			}
			else {
				std::cout << "Kirjoita 'Otto' tai 'Pano' valitaksesi mitä haluat tehdä." << std::endl;
			}
		}
		while(true) {
			std::cout << "Lopetetaanko ohjelma? y/n" << std::endl;
			std::cin >> vastaus;
			if(vastaus == "y"){
				std::cout << "Kiitos käytöstä!" << std::endl;
				return 0;
			}
			if(vastaus == "n") {
				break;
			}
			else {
				std::cout << "Syötä n jos haluat jatkaa ohjelman käyttöä ja y jos haluat lopettaa." << std::endl;
			}
		}
	}
}


#include <iostream>
#include <sstream>
#include <limits>
#include "pankkitili.h"

std::string omistaja, tilinumero;
double saldo;

std::string Pankkitili::getOmistaja() {
	return Omistaja;
}

std::string Pankkitili::getTilinumero() {
	return Tilinumero;
}

double Pankkitili::getSaldo() {
	return Saldo;
}

void Pankkitili::setOmistaja(std::string omistaja) {
	Omistaja = omistaja;
}

void Pankkitili::setTilinumero(std::string tilinumero) {
	Tilinumero = tilinumero;
}

void Pankkitili::setSaldo(double saldo) {
	Saldo = saldo;
}

void Pankkitili::syotaTilinOmistaja() {
	std::cout << "Syötä tilin omistaja: " << std::endl;
	std::string omistaja;
	std::cin >> omistaja;
	setOmistaja(omistaja);
}

void Pankkitili::syotaTilinumero() {
	std::cout << "Syötä tilinumero: " << std::endl;
	std::string tilinumero;
	std::cin >> tilinumero;
	setTilinumero(tilinumero);
}

void Pankkitili::syotaTilinSaldo() {
	double saldo;
	while(true) {
		std::cout << "Syötä tilin saldo: " << std::endl;
		std::cin >> saldo;
		if(!(std::cin)) {
			std::cout << "Syötä lukuarvo tilin saldoksi: " << std::endl;
		}
		else {
			setSaldo(saldo);
			return;
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

double Pankkitili::otto() {
	double otto, saldo, summa, s;
	while(true) {
		s = getSaldo();
		std::cout << "Kirjoita haluamasi noston suuruus lukuina: " << std::endl;
		std::cin >> otto;
		if(!(std::cin)) {
			std::cout << "Syötä lukuarvo!" << std::endl;
		}
		else {
			summa = s - otto;
			if(summa < 0) {
				std::cout << "Ei voida tehdä ottoa, liian vähän rahaa tilillä." << std::endl;
			}
			else {
				break;
			}
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	saldo = s - otto;
	setSaldo(saldo);
	return saldo;
}

double Pankkitili::pano() {
	double pano, s, saldo;
	while(true) {
		std::cout << "Kirjoita haluamasi panon suuruus lukuina: " << std::endl;
		std::cin >> pano;
		if(!(std::cin)) {
			std::cout << "Syötä lukuarvo!" << std::endl;
		}
		else {
			s = getSaldo();
			break;
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	saldo = s + pano;
	setSaldo(saldo);
	return saldo;
}

void Pankkitili::tulostaTilinTiedot() {
	omistaja = getOmistaja();
	tilinumero = getTilinumero();
	saldo = getSaldo();
	std::cout << "Tilin omistaja on: " << omistaja << "\nTilinumero on : " << tilinumero << "\nTilin saldo on: " << saldo << " euroa." << std::endl;
}

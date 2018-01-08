/*
 * maksaState.cpp
 *
 *  Created on: 8 Jan 2018
 *      Author: jore
 */


#include <iostream>
#include "maksaState.h"
#include "automaatti.h"

void maksaState::tulostaValikko(automaatti& p) {
	std::cout << "\n\n Maksusuoritustapahtuma" << std::endl;
	std::cout << " 1) Suorita maksu painamalla" << std::endl;
	std::cout << " 2) Lue ostoslista" << std::endl;
	std::cout << " 3, 4, 5) Peruuta" << std::endl;
	std::cout << "\nValinta: ";
}

void maksaState::valinta1(automaatti& p) {
	std::cout << "|-----------------------------------|" << std::endl;
	std::cout << "Ostoksien maksaminen: " << std::endl;
	p.lueOstokset();
	p.setSumma(0);
	p.setTyhjennaOstokset();
	p.vaihdaState(automaatti::ALOITUS);
	std::cout << "|-----------------------------------|" << std::endl;
}

void maksaState::valinta2(automaatti& p) {
	std::cout << "|-----------------------------------|" << std::endl;
	std::cout << "Ostoslista: " << std::endl;
	p.lueOstokset();
	std::cout << "|-----------------------------------|" << std::endl;
}

void maksaState::valinta3(automaatti& p) {
	p.vaihdaState(automaatti::OSTOSKORI);
}

void maksaState::valinta4(automaatti& p) {
	p.vaihdaState(automaatti::OSTOSKORI);
}

void maksaState::valinta5(automaatti& p) {
	p.vaihdaState(automaatti::OSTOSKORI);
}



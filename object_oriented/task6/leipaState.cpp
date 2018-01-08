/*
 * leipaState.cpp
 *
 *  Created on: 8 Jan 2018
 *      Author: jore
 */


#include <iostream>
#include "leipaState.h"
#include "automaatti.h"

void leipaState::tulostaValikko(automaatti& p) {
	std::cout << " \n\n Valitse voileipä" << std::endl;
	std::cout << " 1) Juustoleipä 2.00 euroa" << std::endl;
	std::cout << " 2) Kalkkunaleipä 2.50 eruoa" << std::endl;
	std::cout << " 3) Kinkkuleipä 3.00 euroa" << std::endl;
	std::cout << " 4) Peruuta" << std::endl;
	std::cout << "\nValinta: ";
}

void leipaState::valinta1(automaatti& p) {
	p.setOstos("Juustoleipä         2.00 euroa");
	p.kasvataSummaa(p.JUUSTOLEIPA);
	p.vaihdaState(automaatti::OSTOSKORI);
}

void leipaState::valinta2(automaatti& p) {
	p.setOstos("Kalkkunaleipä       2.50 eruoa");
	p.kasvataSummaa(p.KALKKUNALEIPA);
	p.vaihdaState(automaatti::OSTOSKORI);
}

void leipaState::valinta3(automaatti& p) {
	p.setOstos("Kinkkuleipä         3.00 euroa");
	p.kasvataSummaa(p.KINKKULEIPA);
	p.vaihdaState(automaatti::OSTOSKORI);
}

void leipaState::valinta4(automaatti& p) {
	if(p.getSumma() != 0) p.vaihdaState(automaatti::OSTOSKORI);
	else p.vaihdaState(automaatti::ALOITUS);
}

void leipaState::valinta5(automaatti& p) {
	std::cout << "Virheellinen valinta. Yritä uudestaan." << std::endl;
}

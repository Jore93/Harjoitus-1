/*
 * ostoskoriState.cpp
 *
 *  Created on: 8 Jan 2018
 *      Author: jore
 */


#include <iostream>
#include "ostoskoriState.h"
#include "automaatti.h"

void ostoskoriState::tulostaValikko(automaatti& p) {
    std::cout << " \n\n Toiminto:" << std::endl;
    std::cout << " 1) Valitse naposteltava" << std::endl;
    std::cout << " 2) Valitse voileipä" << std::endl;
    std::cout << " 3) Maksa ostokset: yhteensä " << p.getSumma() << " euroa" << std::endl;
    std::cout << " 4) Lopeta" << std::endl;
    std::cout << "\nValinta: ";
}

void ostoskoriState::valinta1(automaatti& p) {
    p.vaihdaState(automaatti::SNACK);
}

void ostoskoriState::valinta2(automaatti& p) {
    p.vaihdaState(automaatti::LEIPA);
}

void ostoskoriState::valinta3(automaatti& p) {
    p.vaihdaState(automaatti::MAKSA);
}

void ostoskoriState::valinta4(automaatti& p) {
    p.setLopetus(1);
}

void ostoskoriState::valinta5(automaatti& p) {
    std::cout << "Virheellinen valinta. Yritä uudestaan." << std::endl;
}


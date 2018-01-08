/*
 * aloitusState.cpp
 *
 *  Created on: 8 Jan 2018
 *      Author: jore
 */


#include <iostream>
#include "aloitusState.h"
#include "automaatti.h"


void aloitusState::tulostaValikko(automaatti& p){
    std::cout << " \n\n Toiminto:" << std::endl;
    std::cout << " 1) Valitse naposteltava" << std::endl;
    std::cout << " 2) Valitse voileipä" << std::endl;
    std::cout << " 3) Lopeta" << std::endl;
    std::cout << "\nValinta: ";
}

void aloitusState::valinta1(automaatti& p){
    p.vaihdaState(automaatti::SNACK);
}

void aloitusState::valinta2(automaatti& p){
    p.vaihdaState(automaatti::LEIPA);
}

void aloitusState::valinta3(automaatti& p){
    p.setLopetus(1);
}

void aloitusState::valinta4(automaatti& p){
    std::cout << "Virheellinen valinta. Yritä uudestaan." << std::endl;
}

void aloitusState::valinta5(automaatti& p){
    std::cout << "Virheellinen valinta. Yritä uudestaan." << std::endl;
}


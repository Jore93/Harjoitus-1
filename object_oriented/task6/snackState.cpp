/*
 * snackState.cpp
 *
 *  Created on: 8 Jan 2018
 *      Author: jore
 */


#include <iostream>
#include "snackState.h"
#include "automaatti.h"

void snackState::tulostaValikko(automaatti& p) {
    std::cout << " \n\n Valitse naposteltava:" << std::endl;
    std::cout << " 1) Myslipatukka 1.00 euroa" << std::endl;
    std::cout << " 2) Suklaapatukka 1.50 euroa" << std::endl;
    std::cout << " 3) Suolapähkinät 2.00 euroa" << std::endl;
    std::cout << " 4) Perunalastupussi 2.50 euroa" << std::endl;
    std::cout << " 5) Peruuta" << std::endl;
    std::cout << "\nValinta: ";
}

void snackState::valinta1(automaatti& p) {
    p.setOstos("Myslipatukka        1.00 euroa");
    p.kasvataSummaa(p.MYSLIPATUKKA);
    p.vaihdaState(automaatti::OSTOSKORI);
}

void snackState::valinta2(automaatti& p) {
    p.setOstos("Suklaapatukka       1.50 euroa");
    p.kasvataSummaa(p.SUKLAAPATUKKA);
    p.vaihdaState(automaatti::OSTOSKORI);
}

void snackState::valinta3(automaatti& p) {
    p.setOstos("Suolapähkinät       2.00 euroa");
    p.kasvataSummaa(p.SUOLAPAHKINAT);
    p.vaihdaState(automaatti::OSTOSKORI);
}

void snackState::valinta4(automaatti& p) {
    p.setOstos("Perunalastupussi    2.50 euroa");
    p.kasvataSummaa(p.PERUNALASTUPUSSI);
    p.vaihdaState(automaatti::OSTOSKORI);
}

void snackState::valinta5(automaatti& p) {
    if(p.getSumma() != 0) p.vaihdaState(automaatti::OSTOSKORI);
    else p.vaihdaState(automaatti::ALOITUS);
}

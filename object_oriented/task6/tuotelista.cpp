/*
 * tuotelista.cpp
 *
 *  Created on: 8 Jan 2018
 *      Author: jore
 */


#include "tuotelista.h"

tuotelista::tuotelista() {
    summa = 0;
    ostokset.push_back("");
}

double tuotelista::getSumma() const {
	return summa;
}

std::string tuotelista::getOstos(int index) const {
	return ostokset[index];
}

void tuotelista::setSumma(double ostos) {
	summa = ostos;
}
void tuotelista::setOstos(std::string ostos) {
	ostokset.push_back(ostos);
}
void tuotelista::setTyhjennaOstokset(void) {
	ostokset.resize(0);
}


void tuotelista::lueOstokset(void) {
    for(int index = 0; index < ostokset.size(); index++) {
        std::cout << getOstos(index) << std::endl;
    }
    std::cout << "\nOstoksien summa: " << getSumma() <<" euroa." << std::endl;
}

void tuotelista::kasvataSummaa(double summa) {
	setSumma((getSumma()+summa));
}



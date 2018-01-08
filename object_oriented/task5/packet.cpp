/*
 * packet.cpp
 *
 *  Created on: 8 Jan 2018
 *      Author: jore
 */

#include <iostream>
#include <string>
#include "packet.h"


std::string Packet::getCustomer(void) const {
	return customer;
}

void Packet::setCustomer(std::string name) {
	customer = name;
}


std::string Packet::checkChoice(const int& bits, int index) const {
    if((bits >> index)%2 != 0) return "x";
    else return " ";
}

void Packet::printCustomer() {
            std::cout << "Asiakkaan nimi:       "<< getCustomer() << std::endl << std::endl;
}

void Packet::printFlight(const int& flight) const {
    switch(flight) {
        case 0:
            std::cout << "Lennon valinta:       Aterialla (450e)        [   ]   |   Ilman ateriaa (400e) [ x ]" << std::endl << std::endl;
            break;

        case 1:
            std::cout << "Lennon valinta:       Aterialla (450e)        [ x ]   |   Ilman ateriaa (400e) [   ]" << std::endl << std::endl;
            break;

        default:
            std::cout << "Lennon valinta:       Aterialla (450e)        [   ]   |   Ilman ateriaa (400e) [   ]" << std::endl << std::endl;
            break;
    }
}

void Packet::printHotel(const int& stars) const {
     switch(stars){
        case 2:
            std::cout << "Hotellin valinta:     Kahden tähden (400e)    [ x ]   |   Kolmen tähden (500e) [   ]   |   Neljän tähden (600e) [   ]" << std::endl << std::endl;
            break;

        case 3:
            std::cout << "Hotellin valinta:     Kahden tähden (400e)    [   ]   |   Kolmen tähden (500e) [ x ]   |   Neljän tähden (600e) [   ]" << std::endl << std::endl;
            break;

        case 4:
            std::cout << "Hotellin valinta:     Kahden tähden (400e)    [   ]   |   Kolmen tähden (500e) [   ]   |   Neljän tähden (600e) [ x ]" << std::endl << std::endl;
            break;

        default:
            std::cout << "Hotellin valinta:     Kahden tähden (400e)    [   ]   |   Kolmen tähden (500e) [   ]   |   Neljän tähden (600e) [   ]" << std::endl << std::endl;
            break;
    }
}

void Packet::printServices(const int& bits) const {
            std::cout << "Lisäpalvelut:         Vuokra-auto 3pv. (75e)  [ " << checkChoice(bits, 2) << " ]   |   Laivaretki (45e)     [ " << checkChoice(bits, 1) << " ]   |   Bussiretki (35e)     [ " << checkChoice(bits, 0) << " ]" << std::endl << std::endl;
}

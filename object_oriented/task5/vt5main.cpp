/*
 * vt5main.cpp
 *
 *  Created on: 8 Jan 2018
 *      Author: jore
 */

#include <iostream>
#include <sstream>

#include "createPacket.h"
#include "showPacket.h"
#include "showPrice.h"

template <typename Type> bool convertFromString(const std::string& str, Type& value){
    std::stringstream strm(str);
    Type tmp;
    strm >> tmp;
    bool valRead = false;

    if(!strm.fail()){
        // Input OK - at least the beginning
        value = tmp;
        // Check if something remains
        std::string rem;
        strm >> rem;

        // Stream was empty
        if(strm.fail())
            valRead = true;
    }
    return valRead;
}


int main(){
    std::string name, input;
    int flight = 0, hotel = 0, services = 0;
    int cmd;

	CreatePacket cs(2, 0, 0b000);

	std::cout << "Anna asiakkaan nimi: ";
	getline(std::cin, name);

	// Luodaan kaksi tarkkailijaa
	ShowPacket *ptrObsPacket = new ShowPacket(name);
	ShowPrice *ptrObsPrice = new ShowPrice();

	// Kiinnitetään tarkkailijat kohteeseen
	cs.attach(ptrObsPacket);
	cs.attach(ptrObsPrice);

	do {
        std::cout << "\nValitse komento: " << std::endl;
        std::cout << " 1) Muuta lennon valintaa\n 2) Muuta hotellin valintoja\n 3) Muuta lisäpalveluita\n 4) Lopeta ohjelma" << std::endl;

        getline(std::cin, input);
        if(!convertFromString<int>(input, cmd)) {
        	cmd = 0;
        }

        switch(cmd){
            case 1:
                std::cout << "Valitse ateriallinen lento [1], valitse ateriaton lento [2]: ";
                getline(std::cin, input);
                if(!convertFromString<int>(input, flight)) {
                	flight = 3;
                }

                if(flight == 1) cs.setFlight(1);
                else if(flight == 2) cs.setFlight(0);
                else std::cout << "Virhe! Tuntematon komento." << std::endl;
                break;

            case 2:
                std::cout << "Valitse 2 tähden hotelli [1], valitse 3 tähden hotelli [2], valitse 4 tähden hotelli [3] " << std::endl;
                getline(std::cin, input);
                if(!convertFromString<int>(input, hotel)) {
                	hotel = 0;
                }

                if(hotel == 1) cs.setHotel(2);
                else if(hotel == 2) cs.setHotel(3);
                else if(hotel == 3) cs.setHotel(4);
                else {std::cout << "Virhe! Tuntematon komento." << std::endl;}
                break;

            case 3:
                std::cout << "Muuta vuokra-autoa [1], muuta laivaretkeä [2], muuta bussiretkeä [3] " << std::endl;
                getline(std::cin, input);
                if(!convertFromString<int>(input, services)) {
                	services = 0;
                }

                if(services == 1){
                    if((cs.getXtraServices() >> 2)%2 == 0) cs.setXtraServices((cs.getXtraServices() ^ 0b100)); //Xor-operation
                    else if((cs.getXtraServices() >> 2)%2 != 0) cs.setXtraServices((cs.getXtraServices() & 0b011));
                }

                else if(services == 2){
                    if((cs.getXtraServices() >> 1)%2 == 0) cs.setXtraServices((cs.getXtraServices() ^ 0b010)); //Xor-operation
                    else if((cs.getXtraServices() >> 1)%2 != 0) cs.setXtraServices((cs.getXtraServices() & 0b101));
                }

                else if(services == 3){
                    if((cs.getXtraServices() >> 0)%2 == 0) cs.setXtraServices((cs.getXtraServices() ^ 0b001)); //Xor-operation
                    else if((cs.getXtraServices() >> 0)%2 != 0) cs.setXtraServices((cs.getXtraServices() & 0b110));
                }
                else std::cout << "Virhe! Tuntematon komento." << std::endl;

                break;

            case 4:
                std::cout << "Ohjelma suljetaan." << std::endl;
                delete ptrObsPacket;
                delete ptrObsPrice;
                break;

            default:
                std::cout << "Virhe! Tuntematon komento." << std::endl;
                break;

        }
	} while(cmd != 4);


	return 0;
}




/*
 * createPacket.cpp
 *
 *  Created on: 8 Jan 2018
 *      Author: jore
 */

#include <string>
#include "createPacket.h"

void CreatePacket::setFlight(const int& meal){
    flight = meal;
    notify();
}

void CreatePacket::setHotel(const int& stars){
    hotel = stars;
    notify();
}

void CreatePacket::setXtraServices(const int& services){
    xtraServices = services;
    notify();
}

void CreatePacket::setPrice(const int& value) {
    price = value;
}

int CreatePacket::getFlight() const {
	return flight;
}

int CreatePacket::getHotel() const {
	return hotel;
}

int CreatePacket::getXtraServices() const {
	return xtraServices;
}

int CreatePacket::getPrice() const {
	return price;
}


void CreatePacket::setPacketPrice(void) {
    int tmp = 0;

    if(getFlight() == 0) tmp += 400;
    else if(getFlight() == 1) tmp += 450;

    if(getHotel() == 2) tmp += 400;
    else if(getHotel() == 3) tmp += 500;
    else if(getHotel() == 4) tmp += 600;

    if((getXtraServices() >> 2)%2 != 0) tmp += 75;
    if((getXtraServices() >> 1)%2 != 0) tmp += 45;
    if((getXtraServices() >> 0)%2 != 0) tmp += 35;

    setPrice(tmp);

}






/*
 * showPacket.cpp
 *
 *  Created on: 8 Jan 2018
 *      Author: jore
 */

#include <iostream>
#include "showPacket.h"
#include "createPacket.h"

void ShowPacket::update(Subject* changedSubject){
	CreatePacket *pSubject = dynamic_cast<CreatePacket*>(changedSubject);

	if(pSubject != 0){
        std::cout << std::endl << "|--------------------------------------| " << std::endl << std::endl;
        printCustomer();
		printFlight(pSubject->getFlight());
		printHotel(pSubject->getHotel());
		printServices(pSubject->getXtraServices());
		std::cout << std::endl << std::endl;
	}
}

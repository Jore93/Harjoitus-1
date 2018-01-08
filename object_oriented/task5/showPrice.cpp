/*
 * showPrice.cpp
 *
 *  Created on: 8 Jan 2018
 *      Author: jore
 */

#include <iostream>
#include "showPrice.h"
#include "createPacket.h"

void ShowPrice::update(Subject* changedSubject) {
	CreatePacket *pSubject = dynamic_cast<CreatePacket*>(changedSubject);

	if(pSubject != 0){
        pSubject->setPacketPrice();
		printPrice(pSubject->getPrice());
        std::cout << std::endl << "|--------------------------------------| " << std::endl << std::endl;
	}
}



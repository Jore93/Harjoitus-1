/*
 * showPrice.h
 *
 *  Created on: 8 Jan 2018
 *      Author: jore
 */

#ifndef TASK5_SHOWPRICE_H_
#define TASK5_SHOWPRICE_H_

#include "observer.h"
#include "packetPrice.h"
#include <string>

class ShowPrice: public PacketPrice, public Observer {
    public:
        ShowPrice() {};
        ~ShowPrice() {};

        void update(Subject* changedSubject);
};

#endif /* TASK5_SHOWPRICE_H_ */

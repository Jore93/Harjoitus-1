/*
 * createPacket.h
 *
 *  Created on: 8 Jan 2018
 *      Author: jore
 */

#ifndef TASK5_CREATEPACKET_H_
#define TASK5_CREATEPACKET_H_

#include "subject.h"
#include <string>


class CreatePacket : public Subject {
    private:
        int flight, hotel, xtraServices, price = 0;

    public:
        CreatePacket(int meal, int stars, int services):flight(meal), hotel(stars), xtraServices(services) {};
        ~CreatePacket() {};

        void setFlight(const int& meal);
        void setHotel(const int& stars);
        void setXtraServices(const int& services);
        void setPrice(const int& value);

        int getFlight() const;
        int getHotel() const;
        int getXtraServices() const;
        int getPrice() const;

        void setPacketPrice(void);
};

#endif /* TASK5_CREATEPACKET_H_ */

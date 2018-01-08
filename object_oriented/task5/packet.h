/*
 * packet.h
 *
 *  Created on: 8 Jan 2018
 *      Author: jore
 */

#ifndef TASK5_PACKET_H_
#define TASK5_PACKET_H_

#include <string>

class Packet {
    private:
        std::string customer;
    public:
        Packet(const std::string& name):customer(name) {};
        virtual ~Packet() {};

        std::string getCustomer(void) const;
        void setCustomer(std::string name);


        std::string checkChoice(const int& bits, int index) const;

        void printCustomer(void);
        void printFlight(const int& flight) const;
        void printHotel(const int& stars) const;
        void printServices(const int& bits) const;
};


#endif /* TASK5_PACKET_H_ */

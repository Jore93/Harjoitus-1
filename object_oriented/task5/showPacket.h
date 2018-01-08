/*
 * showPacket.h
 *
 *  Created on: 8 Jan 2018
 *      Author: jore
 */

#ifndef TASK5_SHOWPACKET_H_
#define TASK5_SHOWPACKET_H_

#include "observer.h"
#include "packet.h"
#include <string>

class ShowPacket: public Packet, public Observer {
    public:
        ShowPacket(const std::string& name):Packet(name) {};
        ~ShowPacket() {};

        void update(Subject* changedSubject);
};



#endif /* TASK5_SHOWPACKET_H_ */

/*
 * packetPrice.h
 *
 *  Created on: 8 Jan 2018
 *      Author: jore
 */

#ifndef TASK5_PACKETPRICE_H_
#define TASK5_PACKETPRICE_H_

class PacketPrice {
public:
	PacketPrice() {};
	virtual ~PacketPrice() {};

	void printPrice(const int& total) const;
};



#endif /* TASK5_PACKETPRICE_H_ */

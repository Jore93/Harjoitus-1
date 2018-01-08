/*
 * snackState.h
 *
 *  Created on: 8 Jan 2018
 *      Author: jore
 */


#ifndef SNACKSTATE_H_INCLUDED
#define SNACKSTATE_H_INCLUDED

#include "tuotelista.h"
#include "automaattiState.h"

class automaatti;

class snackState: public automaattiState {
public:
	void tulostaValikko(automaatti& p);
	void valinta1(automaatti& p);
	void valinta2(automaatti& p);
	void valinta3(automaatti& p);
	void valinta4(automaatti& p);
	void valinta5(automaatti& p);
};

#endif //SNACKSTATE_H_INCLUDED

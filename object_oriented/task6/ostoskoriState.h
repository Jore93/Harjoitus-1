/*
 * ostoskoriState.h
 *
 *  Created on: 8 Jan 2018
 *      Author: jore
 */


#ifndef OSTOSKORISTATE_H_INCLUDED
#define OSTOSKORISTATE_H_INCLUDED

#include "automaattiState.h"

class automaatti;

class ostoskoriState: public automaattiState {
    public:
        void tulostaValikko(automaatti& p);
        void valinta1(automaatti& p);
        void valinta2(automaatti& p);
        void valinta3(automaatti& p);
        void valinta4(automaatti& p);
        void valinta5(automaatti& p);
};

#endif //OSTOSKORISTATE_H_INCLUDED

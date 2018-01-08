/*
 * automaattiState.h
 *
 *  Created on: 8 Jan 2018
 *      Author: jore
 */

#ifndef AUTOMAATTISTATE_H_INCLUDED
#define AUTOMAATTISTATE_H_INCLUDED

class automaatti;

class automaattiState {
public:
    virtual void tulostaValikko(automaatti& p)=0;
    virtual void valinta1(automaatti& p)=0;
    virtual void valinta2(automaatti& p)=0;
    virtual void valinta3(automaatti& p)=0;
    virtual void valinta4(automaatti& p)=0;
    virtual void valinta5(automaatti& p)=0;
	virtual ~automaattiState() {};
};

#endif //AUTOMAATTISTATE_H_INCLUDED

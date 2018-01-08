/*
 * automaatti.cpp
 *
 *  Created on: 8 Jan 2018
 *      Author: jore
 */


#include "automaatti.h"

automaatti::automaatti():tuotelista() {
	lopetus = 0;
	psAloitus = new aloitusState();
	psOstoskori = new ostoskoriState();
	psMaksa = new maksaState();
	psSnack = new snackState();
	psLeipa = new leipaState();
	psTila = psAloitus;
}

automaatti::~automaatti() {
	delete psAloitus;
	delete psOstoskori;
	delete psSnack;
	delete psLeipa;
	delete psMaksa;

}

bool automaatti::getLopetus() const {
	return lopetus;
}
void automaatti::setLopetus(bool sammutus) {
	lopetus = sammutus;
}

void automaatti::tulostaValikko() {
	psTila->tulostaValikko(*this);
}

void automaatti::valitse1() {
	psTila->valinta1(*this);
}

void automaatti::valitse2() {
	psTila->valinta2(*this);
}

void automaatti::valitse3() {
	psTila->valinta3(*this);
}

void automaatti::valitse4() {
	psTila->valinta4(*this);
}

void automaatti::valitse5() {
	psTila->valinta5(*this);
}

void automaatti::vaihdaState(int to) {
	switch(to) {
		case ALOITUS:
			psTila = psAloitus;
			break;

		case OSTOSKORI:
			psTila = psOstoskori;
			break;

		case SNACK:
			psTila = psSnack;
			break;

		case LEIPA:
			psTila = psLeipa;
			break;

		case MAKSA:
			psTila = psMaksa;
			break;
	}
}

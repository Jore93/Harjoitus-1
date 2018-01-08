/*
 * automaatti.h
 *
 *  Created on: 8 Jan 2018
 *      Author: jore
 */

#ifndef AUTOMAATTI_H_INCLUDED
#define AUTOMAATTI_H_INCLUDED

#include "automaattiState.h"
#include "aloitusState.h"
#include "ostoskoriState.h"
#include "maksaState.h"
#include "leipaState.h"
#include "snackState.h"
#include "tuotelista.h"


class automaatti: public tuotelista {
    private:
        automaattiState* psTila;
        automaattiState* psAloitus;
        automaattiState* psOstoskori;
        automaattiState* psSnack;
        automaattiState* psLeipa;
        automaattiState* psMaksa;

        bool lopetus;

    public:
        const static int ALOITUS = 1;
        const static int OSTOSKORI = 2;
        const static int SNACK = 3;
        const static int LEIPA = 4;
        const static int MAKSA = 5;
        const static int LOPETA = 6;

        automaatti();
        ~automaatti();

        bool getLopetus() const;

        void setLopetus(bool sammutus);

        void tulostaValikko();
        void valitse1();
        void valitse2();
        void valitse3();
        void valitse4();
        void valitse5();
        void vaihdaState(int to);
};

#endif //AUTOMAATTI_H_INCLUDED

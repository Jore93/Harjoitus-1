/*
 * vt6main.cpp
 *
 *  Created on: 8 Jan 2018
 *      Author: jore
 */


#include <iostream>
#include <sstream>
#include "automaatti.h"


template <typename Type> bool convertFromString(const std::string& str, Type& value) {
    std::stringstream strm(str);
    Type tmp;
    strm >> tmp;
    bool valRead = false;

    if(!strm.fail()) {
        // Input OK - at least the beginning
        value = tmp;
        // Check if something remains
        std::string rem;
        strm >> rem;

        // Stream was empty
        if(strm.fail())
            valRead = true;
    }
    return valRead;
}


int main() {
    automaatti erasAutomaatti;
    int selection = 0;
	std::string input;

	do{
        erasAutomaatti.tulostaValikko();

		getline(std::cin, input);

		if(!convertFromString<int>(input, selection)) {
			selection = 0;
		}

		switch (selection){
            case 1:
                erasAutomaatti.valitse1();
                break;

            case 2:
                erasAutomaatti.valitse2();
                break;

            case 3:
                erasAutomaatti.valitse3();
                break;

            case 4:
                erasAutomaatti.valitse4();
                break;

            case 5:
                erasAutomaatti.valitse5();
                break;

            default:
                std::cout << "Virheellinen valinta. Yritä uudestaan." << std::endl;
		}

	} while (erasAutomaatti.getLopetus() == 0);

    return 0;
}

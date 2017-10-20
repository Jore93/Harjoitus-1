#include "priceInfoContainer.h"
#include <iostream>

int main() {
	PriceInfoContainer container;
	while(true) {
		container.lisaaHintatieto();
		container.tulostaSailio();
		while(true) {
			std::string vast;
			std::cout << "Haluatko lopettaa? (y/n): " << std::endl;
			std::cin >> vast;
			if(vast == "y") {
				return 0;
			}
			else if(vast == "n") {
				break;
			}
			else {
				std::cout << "Syötä 'y', jos haluat lopettaa ja 'n', jos haluat jatkaa" << std::endl;
			}
		}
	}
	return 0;
}


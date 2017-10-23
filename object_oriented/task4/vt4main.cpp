#include "priceInfoContainer.h"
#include <iostream>

int main() {
	PriceInfoContainer container;
	int i = 1;
	while(true) {
		container.lisaaHintatieto();
		i++;
		while(i > 1) {
			std::string vast;
			std::cout << "Haluatko lopettaa? (y/n): " << std::endl;
			std::cin >> vast;
			if(vast == "y") {
				container.tulostaSailio();
				container.~PriceInfoContainer();
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


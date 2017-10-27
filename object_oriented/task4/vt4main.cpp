#include "priceInfoContainer.h"
#include <iostream>

int main() {
	PriceInfoContainer container;
	std::vector<PriceInfo*> vec;
	int index = 1;
	while(true) {
		container.lisaaHintatieto();
		index++;
		while(index > 1) {
			std::string vast;
			std::cout << "Haluatko lopettaa? (y/n): " << std::endl;
			std::cin >> vast;
			if(vast == "y") {
				container.tulostaSailio();
				vec = container.getHintatietoVektori();
				for(std::vector<PriceInfo*>::iterator i=vec.begin(); i != vec.end(); i++) {

					delete(*i); 		// Delete PriceInfo
				}
				std::cout << "Kiitos käytöstä!" << std::endl;
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
	return 1;
}


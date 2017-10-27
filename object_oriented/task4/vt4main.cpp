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
				for(int i=0; i<vec.size(); i++) {
					Vehicle* tmp = vec[i]->getVehicle();
					delete(tmp);			// Delete Vehicle
					delete(vec[i]); 		// Delete PriceInfo
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


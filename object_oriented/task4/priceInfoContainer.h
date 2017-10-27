#ifndef TASK4_PRICEINFOCONTAINER_H_
#define TASK4_PRICEINFOCONTAINER_H_

#include "priceInfo.h"
#include <vector>

class PriceInfoContainer {
	private:
		std::vector <PriceInfo*> priceInfoVector;
	public:
		PriceInfoContainer();
		PriceInfoContainer(std::string merkki, int vuosimalli, int ajetutKM, double hinta);
		~PriceInfoContainer();
		std::vector <PriceInfo*> getHintatietoVektori();
		PriceInfo getHintatieto();
		void setHintatietoVektori(std::string merkki, int vuosimalli, int ajetutKM, double hinta);
		void lisaaHintatieto();
		void tulostaSailio();
		void tulostaLiianKalliit();
		void tulostaSopivat();
};


#endif /* TASK4_PRICEINFOCONTAINER_H_ */

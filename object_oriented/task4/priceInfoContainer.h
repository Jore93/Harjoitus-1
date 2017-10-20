#ifndef TASK4_PRICEINFOCONTAINER_H_
#define TASK4_PRICEINFOCONTAINER_H_

#include "priceInfo.h"
#include <vector>

class PriceInfoContainer {
	private:
		std::vector <PriceInfo> priceInfoVector;
		PriceInfo priceInfo;
	public:
		std::vector <PriceInfo> getHintatietoVektori();
		PriceInfo getHintatieto();
//		std::vector <PriceInfo> *initHintatietoVektori();
		void setHintatietoVektori(std::vector <PriceInfo> priceInfoVec);
		void setHintatieto(PriceInfo priceinfo);
		void lisaaHintatieto();
		void tulostaSailio();
		void tulostaLiianKalliit();
		void tulostaSopivat();
};


#endif /* TASK4_PRICEINFOCONTAINER_H_ */

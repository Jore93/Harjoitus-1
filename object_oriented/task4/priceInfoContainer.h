#ifndef TASK4_PRICEINFOCONTAINER_H_
#define TASK4_PRICEINFOCONTAINER_H_

#include <vector>

class PriceInfoContainer {
	private:
		std::vector priceInfoVector;
		PriceInfo priceInfo;
	public:
		PriceInfo getHintatieto();
		void setHintatieto(PriceInfo priceInfo);
		void lisaaHintatieto();
		void tulostaSailio();
		void tulostaLiianKalliit();
		void tulostaSopivat();
};


#endif /* TASK4_PRICEINFOCONTAINER_H_ */

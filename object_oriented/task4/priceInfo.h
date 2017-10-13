#ifndef TASK4_PRICEINFO_H_
#define TASK4_PRICEINFO_H_

#include "vehicle.h"

class PriceInfo {
	Vehicle vehicle;
	double AjoneuvonHinta;

	double getAjoneuvonHinta();
	void setAjoneuvonHinta(double ajoneuvonHinta);
};

#endif /* TASK4_PRICEINFO_H_ */

#ifndef TASK4_PRICEINFO_H_
#define TASK4_PRICEINFO_H_

#include "vehicle.h"

class PriceInfo {
	private:
		Vehicle *Ajoneuvo = NULL;
		double AjoneuvonHinta;
	public:
		PriceInfo();
		PriceInfo(std::string merkki, int vuosimalli, int ajetutKM, double ajoneuvonHinta);
		~PriceInfo();
		// Getters
		double getAjoneuvonHinta();
		Vehicle getVehicle();
		// Setters
		void setAjoneuvonHinta(double ajoneuvonHinta);
		void setVehicle(Vehicle* ajoneuvo);
		// Methods
		void syotaAjoneuvonHinta();
};

#endif /* TASK4_PRICEINFO_H_ */

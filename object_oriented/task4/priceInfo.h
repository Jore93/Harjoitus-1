#ifndef TASK4_PRICEINFO_H_
#define TASK4_PRICEINFO_H_

#include "vehicle.h"

class PriceInfo {
	private:
		Vehicle vehicle;
		double AjoneuvonHinta;
	public:
		// Getters
		double getAjoneuvonHinta();
		Vehicle getVehicle();
		// Setters
		void setAjoneuvonHinta(double ajoneuvonHinta);
		void setVehicle(Vehicle vehicle);
		// Methods
		void syotaAjoneuvonHinta();
};

#endif /* TASK4_PRICEINFO_H_ */

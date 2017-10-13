#ifndef TASK4_VEHICLE_H_
#define TASK4_VEHICLE_H_

#include <string>

class Vehicle {
	private:
		std::string AjoneuvonMerkki;
		int Valmistusvuosi, AjetutKilometrit;
	public:
		std::string getMerkki();
		int getValmistusvuosi();
		int getAjetutKilometrit();

		void setMerkki(std::string ajoneuvonMerkki);
		void setValmistusvuosi(int valmistusuosi);
		void setAjetutKilometrit(int ajetutKm);
};



#endif /* TASK4_VEHICLE_H_ */

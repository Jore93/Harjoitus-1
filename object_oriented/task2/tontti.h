#ifndef TASK2_TONTTI_H_
#define TASK2_TONTTI_H_


#include "sijainti.h"
#include "rakennus.h"

class Tontti {
	private:
		std::string Nimi;
		Rakennus rakennus;
		Sijainti sijainti;

	public:
		// Getter
		std::string getNimi();

		// Setter
		void setNimi(std::string nimi);

		// Methods
		void syotaNimi();
		void syotaTiedot();
		void tulostaTontti();
		void tulostaTiedot();
};


#endif /* TASK2_TONTTI_H_ */

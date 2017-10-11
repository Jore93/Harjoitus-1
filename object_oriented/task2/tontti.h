#ifndef TASK2_TONTTI_H_
#define TASK2_TONTTI_H_


#include "sijainti.h"
#include "rakennus.h"

using namespace std;

class Tontti: public Rakennus, public Sijainti {
	private:
		string Nimi;

	public:
		// Getter
		string getNimi();

		// Setter
		void setNimi(string nimi);

		// Methods
		void syotaNimi();
		void syotaTiedot();
		void tulostaTontti();
		void tulostaTiedot();
};


#endif /* TASK2_TONTTI_H_ */

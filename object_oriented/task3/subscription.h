#ifndef TASK3_SUBSCRIPTION_H_
#define TASK3_SUBSCRIPTION_H_

#include <string>

class Subscription {
	private:
		std::string Lehden_nimi, Tilaajan_nimi, Toimitusosoite, Tyyppi;
		double Kuukausihinta, Laskutettavat_kk, Hinta;
	public:
		// Getters
		std::string getLehdenNimi();
		std::string getTilaajanNimi();
		std::string getToimitusosoite();
		std::string getTyyppi();
		double getKuukausihinta();
		double getLaskutettavatKK();
		double getHinta();

		// Setters
		void setLehdenNimi(std::string lehden_nimi);
		void setTilaajanNimi(std::string tilaajan_nimi);
		void setToimitusosoite(std::string toimitusosoite);
		void setTyyppi(std::string tyyppi);
		void setKuukausihinta(double kuukausihinta);
		void setLaskutettavatKK(double laskutettavat_kk);
		void setHinta(double hinta);

		// Methods
		void syotaTyyppi();
		void syotaLehdenNimi();
		void syotaTilaajanNimi();
		void syotaToimitusosoite();
		void syotaKuukausihinta();
		void syotaKuukaudet();
		void printInvoice();
};


#endif /* TASK3_SUBSCRIPTION_H_ */

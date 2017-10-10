#ifndef TASK3_SUBSCRIPTION_H_
#define TASK3_SUBSCRIPTION_H_

#include "regularSubscription.h"
#include "standingSubscription.h"

using namespace std;

class Subscription: public RegularSubscription, StandingSubscription {
	private:
		string Lehden_nimi, Tilaajan_nimi, Toimitusosoite, Tyyppi;
		double Kuukausihinta, Laskutettavat_kk, Hinta;
	public:
		// Getters
		string getLehdenNimi();
		string getTilaajanNimi();
		string getToimitusosoite();
		string getTyyppi();
		double getKuukausihinta();
		double getLaskutettavatKK();
		double getHinta();

		// Setters
		void setLehdenNimi(string lehden_nimi);
		void setTilaajanNimi(string tilaajan_nimi);
		void setToimitusosoite(string toimitusosoite);
		void setTyyppi(string tyyppi);
		void setKuukausihinta(double kuukausihinta);
		void setLaskutettavatKK(double laskutettavat_kk);
		void setHinta(double hinta);

		// Methods
		void syotaTyyppi();
		void syotaLehdenNimi();
		void syotaTilaajanNimi();
		void syotaToimitusosoite();
		void syotaKuukausihinta();
		void laskeHinta();
};

void printSubscriptionInvoice(Subscription &subs);


#endif /* TASK3_SUBSCRIPTION_H_ */

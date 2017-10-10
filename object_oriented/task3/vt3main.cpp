#include "subscription.h"
#include "regularSubscription.h"
#include "standingSubscription.h"

int main() {
	Subscription Tilaus;
	RegularSubscription Normaalitilaus;
	StandingSubscription Kestotilaus;

	string tyyppi;

	Tilaus.syotaTyyppi();
	tyyppi = Tilaus.getTyyppi();

	if(tyyppi == "Normaalitilaus") {
		Normaalitilaus.syotaTilaajanNimi();
		Normaalitilaus.syotaLehdenNimi();
		Normaalitilaus.syotaToimitusosoite();
		Normaalitilaus.syotaTilauksenKesto();
		Normaalitilaus.syotaKuukausihinta();
		Normaalitilaus.laskeNormaaliHinta();

		printSubscriptionInvoice(Normaalitilaus);
	}
	if(tyyppi == "Kestotilaus") {
		Kestotilaus.syotaTilaajanNimi();
		Kestotilaus.syotaLehdenNimi();
		Kestotilaus.syotaToimitusosoite();
		Kestotilaus.syotaAlennusprosentti();
		Kestotilaus.syotaKuukausihinta();
		Kestotilaus.laskeKestoHinta();

		printSubscriptionInvoice(Kestotilaus);
	}

	return 0;
}


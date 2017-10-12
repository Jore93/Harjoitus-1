#ifndef TASK3_STANDINGSUBSCRIPTION_H_
#define TASK3_STANDINGSUBSCRIPTION_H_

#include "subscription.h"

class StandingSubscription: public Subscription {
	private:
		int Alennusprosentti;
	public:
		// Getters
		int getAlennusprosentti();

		// Setters
		void setAlennusprosentti(int alennusprosentti);

		// Methods
		int tilauksenKesto();
		void syotaAlennusprosentti();
		void laskeKestoHinta();
};


#endif /* TASK3_STANDINGSUBSCRIPTION_H_ */

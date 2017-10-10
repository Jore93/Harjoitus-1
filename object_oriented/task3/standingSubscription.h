#ifndef TASK3_STANDINGSUBSCRIPTION_H_
#define TASK3_STANDINGSUBSCRIPTION_H_

#include "subscription.h"

using namespace std;

class StandingSubscription: public Subscription {
	private:
		int Alennusprosentti;
	public:
		// Getters
		int getAlennusprosentti();

		// Setters
		void setAlennusprosentti(int alennusprosentti);

		// Methods
		void syotaAlennusprosentti();
};


#endif /* TASK3_STANDINGSUBSCRIPTION_H_ */

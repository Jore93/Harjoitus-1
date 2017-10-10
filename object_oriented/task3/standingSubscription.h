#ifndef TASK3_STANDINGSUBSCRIPTION_H_
#define TASK3_STANDINGSUBSCRIPTION_H_

using namespace std;

class StandingSubscription {
	private:
		int Alennusprosentti;
	public:
		// Getters
		int getAlennusprosentti();

		// Setters
		void setAlennusprosentti(int alennusprosentti);

		// Methods
		void syotaAlennusprosentti();
		void laskeKestoHinta();
};


#endif /* TASK3_STANDINGSUBSCRIPTION_H_ */

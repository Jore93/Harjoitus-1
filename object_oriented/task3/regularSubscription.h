#ifndef TASK3_REGULARSUBSCRIPTION_H_
#define TASK3_REGULARSUBSCRIPTION_H_

#include "subscription.h"

using namespace std;

class RegularSubscription {
	private:
		int Tilauksen_kesto;
	public:
		// Getters
		int getTilauksenKesto();

		// Setters
		void setTilauksenKesto(int tilauksen_kesto);

		// Methods
		void syotaTilauksenKesto();
		void laskeNormaaliHinta();
};


#endif /* TASK3_REGULARSUBSCRIPTION_H_ */

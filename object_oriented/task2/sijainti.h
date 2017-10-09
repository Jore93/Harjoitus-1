#ifndef TASK2_SIJAINTI_H_
#define TASK2_SIJAINTI_H_


using namespace std;

class Sijainti {
	private:
		string Leveyspiiri;
		string Pituuspiiri;

	public:
		// Getters
		string getLeveyspiiri();
		string getPituuspiiri();

		// Setters
		void setLeveyspiiri(string leveyspiiri);
		void setPituuspiiri(string pituuspiiri);

		// Methods
		void syotaLeveyspiiri();
		void syotaPituuspiiri();
		void tulostaSijainti();
};


#endif /* TASK2_SIJAINTI_H_ */

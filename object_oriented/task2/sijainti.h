#ifndef TASK2_SIJAINTI_H_
#define TASK2_SIJAINTI_H_


class Sijainti {
	private:
		std::string Leveyspiiri;
		std::string Pituuspiiri;

	public:
		// Getters
		std::string getLeveyspiiri();
		std::string getPituuspiiri();

		// Setters
		void setLeveyspiiri(std::string leveyspiiri);
		void setPituuspiiri(std::string pituuspiiri);

		// Methods
		void syotaLeveyspiiri();
		void syotaPituuspiiri();
		void tulostaSijainti();
};


#endif /* TASK2_SIJAINTI_H_ */

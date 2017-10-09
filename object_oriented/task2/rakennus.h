#ifndef TASK2_RAKENNUS_H_
#define TASK2_RAKENNUS_H_

using namespace std;

class Rakennus {
	private:
		int Ala;
		int Kerrokset;

	public:
		// Getters
		int getAla();
		int getKerrokset();

		// Setters
		void setAla(int pinta_ala);
		void setKerrokset(int kerrosten_lkm);

		// Methods
		void syotaPinta_ala();
		void syotaKerrosten_lkm();
		void tulostaRakennus();
};



#endif /* TASK2_RAKENNUS_H_ */

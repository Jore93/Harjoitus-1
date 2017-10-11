#ifndef PANKKITILI
#define PANKKITILI


class Pankkitili {

private:
	std::string Omistaja;
	std::string Tilinumero;
	double Saldo;

public:
	// Getters
	std::string getOmistaja();
	double getSaldo();
	std::string getTilinumero();

	// Setters
	void setTilinumero(std::string tilinumero);
	void setOmistaja(std::string omistaja);
	void setSaldo(double saldo);

	// Methods
	void syotaTilinOmistaja();
	void syotaTilinumero();
	void syotaTilinSaldo();
	double otto();
	double pano();
	void tulostaTilinTiedot();
};
#endif

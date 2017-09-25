#include <iostream>

using namespace std;

#ifndef PANKKITILI
#define PANKKITILI

class Pankkitili {

  private:
    string Omistaja;
    string Tilinumero;
    double Saldo;

  public:
  // Getters
    string getOmistaja();
    void setOmistaja(string omistaja);
    string getTilinumero();

  // Setters
    void setTilinumero(string tilinumero);
    double getSaldo();
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

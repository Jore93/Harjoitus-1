#include <iostream>
#include "pankkitili.h"

using namespace std;

string omistaja, tilinumero;
double saldo;

string Pankkitili::getOmistaja() {
  return Omistaja;
}

string Pankkitili::getTilinumero() {
  return Tilinumero;
}

double Pankkitili::getSaldo() {
  return Saldo;
}

void Pankkitili::setOmistaja(string omistaja) {
  Omistaja = omistaja;
}

void Pankkitili::setTilinumero(string tilinumero) {
  Tilinumero = tilinumero;
}

void Pankkitili::setSaldo(double saldo) {
  Saldo = saldo;
}

void Pankkitili::syotaTilinOmistaja() {
  cout << "Syötä tilin omistaja: " << endl;
  string omistaja;
  cin >> omistaja;
  setOmistaja(omistaja);
}

void Pankkitili::syotaTilinumero() {
  cout << "Syötä tilinumero: " << endl;
  string tilinumero;
  cin >> tilinumero;
  setTilinumero(tilinumero);
}

void Pankkitili::syotaTilinSaldo() {
  cout << "Syötä tilin saldo: " << endl;
  double saldo;
  cin >> saldo;
  setSaldo(saldo);
}

double Pankkitili::otto() {
  while(true) {
      cout << "Kirjoita haluamasi noston suuruus lukuina: " << endl;
      double otto;
      cin >> otto;
      double saldo;
      double summa;
      double s;
      s = getSaldo();
      summa = s - otto;
      if(summa < 0) {
        cout << "Ei voida tehdä ottoa, liian vähän rahaa tilillä." << endl;
      }
      else {
        saldo = s - otto;
        setSaldo(saldo);
      break;
      }
  }
  return saldo;
}

double Pankkitili::pano() {
  cout << "Kirjoita haluamasi panon suuruus lukuina: " << endl;
  double pano;
  cin >> pano;
  double s;
  s = getSaldo();
  double saldo;
  saldo = s + pano;
  setSaldo(saldo);
  return saldo;
}

void Pankkitili::tulostaTilinTiedot() {
	omistaja = getOmistaja();
	tilinumero = getTilinumero();
	saldo = getSaldo();
	cout << "Tilin omistaja on: " << omistaja << "\nTilinumero on : " << tilinumero << "\nTilin saldo on: " << saldo << " euroa." << endl;
}

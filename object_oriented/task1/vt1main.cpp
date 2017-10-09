#include <iostream>
#include "pankkitili.h"

using namespace std;

int main() {
    Pankkitili Tili;
    string omistaja;
    string tilinumero;
    double saldo;
    string vast;
    string vastaus;

    omistaja = Tili.getOmistaja();
    tilinumero = Tili.getTilinumero();
    saldo = Tili.getSaldo();

    Tili.syotaTilinOmistaja();
    Tili.syotaTilinumero();
    Tili.syotaTilinSaldo();
    Tili.tulostaTilinTiedot();
    while(true) {
      cout << "Haluatko tehdä noston vai panon? Kirjoita 'Otto' tai 'Pano'" << endl;
      cin >> vast;
      if(vast == "Otto") {
        Tili.otto();
        Tili.tulostaTilinTiedot();
        }
      if(vast == "Pano") {
        Tili.pano();
        Tili.tulostaTilinTiedot();
      }
      else {
        cout << "Kirjoita 'Otto' tai 'Pano' valitaksesi mitä haluat tehdä." << endl;
      }
      while(true) {
        cout << "Lopetetaanko ohjelma? y/n" << endl;
        cin >> vastaus;
        if(vastaus == "y"){
          cout << "Kiitos käytöstä!" << endl;
          return 0;
        }
        if(vastaus == "n") {
          break;
        }
        else {
          cout << "Syötä n jos haluat jatkaa ohjelman käyttöä ja y jos haluat lopettaa." << endl;
        }
      }
    }
}

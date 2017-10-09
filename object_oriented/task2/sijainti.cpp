#include <iostream>
#include "sijainti.h"



string Sijainti::getLeveyspiiri(void) {
	return Leveyspiiri;
}
string Sijainti::getPituuspiiri(void) {
	return Pituuspiiri;
}

// Setters
void Sijainti::setLeveyspiiri(string leveyspiiri) {
	Leveyspiiri = leveyspiiri;
}
void Sijainti::setPituuspiiri(string pituuspiiri) {
	Pituuspiiri = pituuspiiri;
}

// Methods
void Sijainti::syotaLeveyspiiri(void) {
  cout << "Syötä leveyspiiri: " << endl;
  string leveyspiiri;
  cin >> leveyspiiri;
  setLeveyspiiri(leveyspiiri);
}
void Sijainti::syotaPituuspiiri(void) {
	cout << "Syötä pituuspiiri: " << endl;
	string pituuspiiri;
	cin >> pituuspiiri;
	setPituuspiiri(pituuspiiri);
}
void Sijainti::tulostaSijainti(void) {
	string pituuspiiri = getPituuspiiri();
	string leveyspiiri = getLeveyspiiri();
	cout << "Sijainti on " << leveyspiiri << " astetta leveyttä ja " << pituuspiiri << " astetta pituutta." << endl;
}

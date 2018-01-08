/*
 * tuotelista.h
 *
 *  Created on: 8 Jan 2018
 *      Author: jore
 */


#ifndef TUOTELISTA_H_INCLUDED
#define TUOTELISTA_H_INCLUDED

#include <iostream>
#include <vector>

class tuotelista{
private:
	double summa;
	std::vector<std::string> ostokset;
public:
	const double JUUSTOLEIPA = 2.00;
	const double KALKKUNALEIPA = 2.50;
	const double KINKKULEIPA = 3.00;
	const double MYSLIPATUKKA = 1.00;
	const double SUKLAAPATUKKA = 1.50;
	const double SUOLAPAHKINAT = 2.00;
	const double PERUNALASTUPUSSI = 2.50;

	tuotelista();
	~tuotelista(){};

	double getSumma() const;
	std::string getOstos(int index) const;

	void setSumma(double ostos);
	void setOstos(std::string ostos);
	void setTyhjennaOstokset(void);

	void lueOstokset(void);
	void kasvataSummaa(double summa);

};

#endif //LEIPASTATE_H_INCLUDED

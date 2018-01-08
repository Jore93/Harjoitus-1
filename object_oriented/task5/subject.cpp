/*
 * observer.cpp
 *
 *  Created on: 7 Jan 2018
 *      Author: jore
 */

#include "subject.h"
#include "observer.h"

void Subject::attach(Observer* o) {
	observers.push_back(o);
};

void Subject::detach(Observer* o) {
	observers.remove(o);
};

void Subject::notify() {
	std::list<Observer*>::iterator iter;
	for(iter = observers.begin(); iter != observers.end(); iter++) {
		(*iter)->update(this);
	}
};


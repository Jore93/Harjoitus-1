/*
 * subject.h
 *
 *  Created on: 7 Jan 2018
 *      Author: jore
 */

#include <list>

#ifndef TASK5_SUBJECT_H_
#define TASK5_SUBJECT_H_

class Observer;

class Subject {
public:
	virtual ~Subject() {};
	virtual void attach(Observer*);
	virtual void detach(Observer*);
	virtual void notify();
private:
	std::list<Observer*> observers;
};


#endif /* TASK5_SUBJECT_H_ */

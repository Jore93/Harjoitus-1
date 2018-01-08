/*
 * observer.h
 *
 *  Created on: 8 Jan 2018
 *      Author: jore
 */

#ifndef TASK5_OBSERVER_H_
#define TASK5_OBSERVER_H_

class Subject;

class Observer {
public:
	virtual ~Observer() {};
	virtual void update(Subject* changedSubject) = 0;
};

#endif /* TASK5_OBSERVER_H_ */

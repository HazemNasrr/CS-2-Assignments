#ifndef MECHANIC_H
#define MECHANIC_H

#include "Person.h"
#include <vector>
#include <iostream>

class mechanic :public person
{
private:
	int counter;
	vector<appointment> time;

public:
	mechanic();

	void setTime(appointment x);

	int getTime() const;

	int getcounter() const;

	bool isAvailable(appointment t);
};

#endif

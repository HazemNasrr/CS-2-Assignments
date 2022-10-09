#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Person.h"

using namespace std;

class customer :public person
{
private:
	int mechID;
	appointment appoint;

public:
	customer();

	customer(int ID, int h, int m);

	void setmechID(int id);

	int getmechID() const;

	void setHours(int h);

	int getHours() const;

	void setMins(int m);

	int getMins() const;

	friend bool operator ==(customer x, customer y);
	
	friend bool operator <(customer x, customer y);

	friend bool operator >(customer x, customer y);
};

#endif
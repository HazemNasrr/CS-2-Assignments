#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class person
{
private:
	string name;
	int id, age;

public:
	person();

	person(string n, int i, int a);

	void setname(string n);

	string getname() const;

	void setid(int i);

	int getid() const;

	void setage(int a);

	int getage() const;

	void print();

	struct appointment
	{
		int hours, mins;
	};
};

#endif
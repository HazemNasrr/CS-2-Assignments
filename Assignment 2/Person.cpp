#include "Person.h"
#include <iostream>

person::person()
{
	name = "";
	id = 0;
	age = 0;
}

person::person(string n, int i, int a)
{
	name = n;
	id = i;
	age = a;
}

void person::setname(string n)
{
	name = n;
}

string person::getname() const
{
	return name;
}

void person::setid(int i)
{
	id = i;
}

int person::getid() const
{
	return id;
}

void person::setage(int a)
{
	age = a;
}

int person::getage() const
{
	return age;
}

void person::print()
{
	cout << name << endl << age << endl << id;
}

struct appointment
{
	int hours, mins;
};
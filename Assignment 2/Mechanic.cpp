#include "Mechanic.h"

mechanic::mechanic()
{
	counter = 0;
}

void mechanic::setTime(appointment x)
{
	time.push_back(x);
}

int mechanic::getTime() const
{
	for (appointment x : time)
	{
		return x.hours;
		return x.mins;
	}
}

int mechanic::getcounter() const
{
	return counter;
}

bool mechanic::isAvailable(appointment t)
{
	int x = 0;

	for (int i = 0; i < time.size(); i++)
	{
		if (t.hours == time.at(i).hours)
		{
			x++;
		}
	}

	if (x == 1)
	{
		return false;
	}
	else
	{
		return true;
	}
}


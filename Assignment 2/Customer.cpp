#include "Customer.h"

customer::customer()
{
	mechID = 0;
	appoint.hours = 0;
	appoint.mins = 0;
}

customer::customer(int ID, int h, int m)
{
	mechID = ID;
	appoint.hours = h;
	appoint.mins = m;
}

void customer::setmechID(int id)
{
	mechID = id;
}

int customer::getmechID() const
{
	return mechID;
}

void customer::setHours(int h)
{
	appoint.hours = h;
}

int customer::getHours() const
{
	return appoint.hours;
}

void customer::setMins(int m)
{
	appoint.mins = m;
}

int customer::getMins() const
{
	return appoint.mins;
}

bool operator ==(customer x, customer y)
{
	if ((x.getHours() == y.getHours()) && (x.getMins() == y.getMins()))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator <(customer x, customer y)
{
	if (x.getHours() == y.getHours())
	{
		if (x.getMins() < y.getMins())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (x.getHours() < y.getHours())
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator >(customer x, customer y)
{
	if (x.getHours() == y.getHours())
	{
		if (x.getMins() > y.getMins())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (x.getHours() > y.getHours())
	{
		return true;
	}
	else
	{
		return false;
	}
}




//CS 2 - Assignemnt 1 (Class car)

#include <iostream>
#include <string>

using namespace std;

class car
{
private:
	string brand, type, plate;
	int speed, model;
	
public:
	car()
	{
		brand = " ";
		type = " ";
		plate = " ";
		speed = 0;
		model = 0;
	}

	car(string b, string t, string p, int s, int m)
	{
		brand = b;
		type = t;
		plate = p;
		speed = s;
		model = m;
	}

	void setbrand(string b)
	{
		brand = b;
	}
	string getbrand()
	{
		return brand;
	}

	void settype(string t)
		{
			type = t;
		}
	string gettype()
		{
			return type;
		}

	void setplate(string p)
	{
		plate = p;
	}
	string getplate()
	{
		return plate;
	}

	void setspeed(int s)
	{
		speed = s;
	}
	int getspeed()
	{
		return speed;
	}

	void getmodel(int m)
	{
		model = m;
	}
	int getmodel()
	{
		return model;
	}
};


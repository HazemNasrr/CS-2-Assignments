//CS 2 - Assignment 2 (Class Road)

#include <iostream>
#include <string>

using namespace std;

class road
{
private:
	char road_type;
	int speed_limit;
	int unsigned countA = 0, countB = 0, countC = 0;

public:
	road()
	{
		road_type = ' ';
		speed_limit = 0;
	}

	road(char r, int s)
	{
		speed_limit = s;
		while (r != 'a' && r != 'A' && r != 'b' && r != 'B' && r != 'c' && r != 'C')
		{
			cout << "Road type can only be A/a or B/b or C/c" << endl << "Enter the road type: ";
			cin >> r;
		}
		road_type = r;
		
	}

	void setType(char r)
	{
		while (r != 'a' && r != 'A' && r != 'b' && r != 'B' && r != 'c' && r != 'C')
		{
			cout << "Road type can only be A/a or B/b or C/c" << endl << "Enter the road type: ";
			cin >> r;
		}
		road_type = r;
	}
	char getType() const
	{
		return road_type;
	}

	void setLimit(int s)
	{
		speed_limit = s;
	}
	int getLimit() const
	{
		return speed_limit;
	}

	int getcountA() const
	{
		return countA;
	}

	int getcountB() const
	{
		return countB;
	}

	int getcountC() const
	{
		return countC;
	}

	bool radar(int c, road r)
	{
		if (c > r.getLimit())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	void allow(string car_type)
	{
		if (car_type == "private" || car_type == "motorcycle" || car_type == "Motorcycle" || car_type == "Private")
		{
			cout << "This vehicle is allowed on roads A/a & B/b";
			countA++;
			countB++;
		}
		else if (car_type == "bus" || car_type == "Bus")
		{
			cout << "This vehicle is only allowed on road B/b";
			countB++;
		}
		else if (car_type == "Truck" || car_type == "truck")
		{
			cout << "This vehicle is allowed on roads B/b & C/c";
			countB++;
			countC++;
		}
		else
		{
			cout << "This vehicle is not allowed on any road!";
		}
	}

	int age(int year_model)
	{
		return 2022 - year_model;
	}
};




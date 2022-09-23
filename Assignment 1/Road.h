//CS 2 - Assignment 2 (Class Road)

#include <iostream>
#include <string>

using namespace std;

class road
{
private:
	char road_type;
	int speed_limit;
	static int countA, countB, countC;

public:
	road()
	{
		road_type = ' ';
		speed_limit = 0;
	}

	road(char r, int s)
	{
		speed_limit = s;
		while (r != 'A' && r != 'B' && r != 'C')
		{
			cout << "Road type can only be A or B or C" << endl << "Enter the road type: ";
			cin >> r;
		}
		road_type = r;
		
	}

	void setType(char r)
	{
		while (r != 'A' && r != 'B' && r != 'C')
		{
			cout << "Road type can only be A or B or C" << endl << "Enter the road type: ";
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

	static int getcountA()
	{
		return countA;
	}

	static int getcountB() 
	{
		return countB;
	}

	static int getcountC() 
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
		if (car_type == "private" || car_type == "motorcycle")
		{
			cout << "This vehicle is allowed on roads A & B" << endl;
			countA++;
			countB++;
		}
		else if (car_type == "bus")
		{
			cout << "This vehicle is only allowed on road B" << endl;
			countB++;
		}
		else if (car_type == "truck")
		{
			cout << "This vehicle is allowed on roads B & C" << endl;
			countB++;
			countC++;
		}
	}

	int age(int year_model)
	{
		return 2022 - year_model;
	}
};

int road::countA = 0;
int road::countB = 0;
int road::countC = 0;





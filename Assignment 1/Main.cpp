
// Main function - Assignment 1

#include <iostream>
#include "car.h"
#include "road.h"
#include <queue>

using namespace std;

int main()
{
	string brand, type, plate, x;
	int speed, model;
	double a, b, c;
	road road1('A', 140);
	road road2('B', 140);
	road road3('C', 120);
	queue<car> queue1;

	do
	{
		cout << endl << "Enter the details of the car: " << endl;
		cout << "Brand: ";
		cin >> brand;
		cout << "Type: ";
		cin >> type;
		while (type != "private" && type != "motorcycle" && type != "bus" && type != "truck")
		{
			cout << "Invalid Input. Try again: ";
			cin >> type;
		}
		cout << "Plate: ";
		cin >> plate;
		cout << "Speed: ";
		cin >> speed;
		cout << "Model: ";
		cin >> model;
		car vehicle(brand, type, plate, speed, model);
		queue1.push(vehicle);
		cout << endl << "Do you want to add another car? Yes or No: ";
		cin >> x;
		while (x != "Yes" && x != "No")
		{
			cout << "Invalid Input. Yes or No: ";
			cin >> x;
		}
	} while (x != "No");

	while (!queue1.empty())
	{
		cout << endl << queue1.front().getbrand() << " " << queue1.front().getmodel() << endl;

		road1.allow(queue1.front().gettype());

		if (queue1.front().gettype() == "private" || queue1.front().gettype() == "motorcycle")
		{
			if (road1.radar(queue1.front().getspeed(), road1))
			{
				cout << "Brand: " << queue1.front().getbrand() << endl;
				cout << "Type: " << queue1.front().gettype() << endl;
				cout << "Plate: " << queue1.front().getplate() << endl;
				cout << "Speed: " << queue1.front().getspeed() << endl;
				cout << "Model: " << queue1.front().getmodel() << endl;
				cout << "This car will be fined!" << endl;
			}
		}
		else if (queue1.front().gettype() == "bus")
		{
			if (road1.radar(queue1.front().getspeed(), road2))
			{
				cout << "Brand: " << queue1.front().getbrand() << endl;
				cout << "Type: " << queue1.front().gettype() << endl;
				cout << "Plate: " << queue1.front().getplate() << endl;
				cout << "Speed: " << queue1.front().getspeed() << endl;
				cout << "Model: " << queue1.front().getmodel() << endl;
				cout << "This car will be fined!" << endl;
			}
		}
		else
		{
			if (road1.radar(queue1.front().getspeed(), road3))
			{
				cout << "Brand: " << queue1.front().getbrand() << endl;
				cout << "Type: " << queue1.front().gettype() << endl;
				cout << "Plate: " << queue1.front().getplate() << endl;
				cout << "Speed: " << queue1.front().getspeed() << endl;
				cout << "Model: " << queue1.front().getmodel() << endl;
				cout << "This vehicle will be fined!" << endl;
			}
		}

		cout << "The car is " << road1.age(queue1.front().getmodel()) << " years old." << endl;
		queue1.pop();
	}

	a = road::getcountA();
	b = road::getcountB();
	c = road::getcountC();

	cout << endl << "Number of cars that passed on road A is " << road::getcountA() << " | Efficinecy: " << (a / b) * 100 << "%";
	cout << endl << "Number of cars that passed on road B is " << road::getcountB() << " | Efficinecy: " << (b / b) * 100 << "%";
	cout << endl << "Number of cars that passed on road C is " << road::getcountC() << " | Efficinecy: " << (c / b) * 100 << "%";
}


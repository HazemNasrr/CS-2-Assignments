#include <iostream>
#include <vector>
#include "Linked List.h"

using namespace std;

void insertAfter(vector<int>& v, int v1, int v2);

int main()
{
	int x, y, v1, v2;

	vector<int> v;

	cout << "How many numbers would you like to enter?" << endl;
	cin >> y;

	cout << "Enter the numbers to store them in the vector: " << endl;

	for (int i = 0; i < y; i++)
	{
		cin >> x;
		v.push_back(x);
	}

	cout << "Enter the value that you would like to look for: ";
	cin >> v1;
	cout << "Enter the value that you would like to insert: ";
	cin >> v2;

	insertAfter(v, v1, v2);

	cout << "The updated vector is:" << endl;

	for (int i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << endl;
	}

	list mylist;

	mylist.vector_list(v);

	cout << "The list of numbers and occurences is: " << endl;
	mylist.print();

	cout << "The sum of the list is: ";
	mylist.listSum();
}

void insertAfter(vector<int>& v, int v1, int v2)
{
	for (int i = 0; i < v.size(); i++)
	{
		if (v.at(i) == v1)
		{
			v.insert(v.begin() + (i + 1), v2);
		}
	}
}
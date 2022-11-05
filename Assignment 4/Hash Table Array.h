#ifndef HASH_TABLE_ARRAY
#define HASH_TABLE_ARRAY

#include <iostream>
#include <string>

using namespace std;

struct node
{
	string name = "";
	int age = 0, salary = 0, experience = 0;
	node* next = NULL;
};

class hash_table_array
{
private:
	node* arr1[10];
	int count;

	int hash(string name);

public:
	hash_table_array();

	void add(string name, int age, int salary, int experience);

	void remove(string name);

	void print();

	int collision_rate();
};

#endif

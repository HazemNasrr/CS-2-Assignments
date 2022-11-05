#ifndef HASH_TABLE_LIST
#define HASH_TABLE_LIST

#include <iostream>
#include <string>

using namespace std;

struct node
{
	string name;
	int age, salary, experience;
	node* next;
};

class hash_table_list
{
private:
	node* arr1[10];
	int count;

	int hash(string name);

public:
	hash_table_list();

	void add(string name, int age, int salary, int experience);

	void remove(string name);

	void print();

	int collision_rate();
};

#endif

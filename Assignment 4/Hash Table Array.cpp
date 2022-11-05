#include "Hash Table Array.h"

using namespace std;

int hash_table_array::hash(string name)
{
	int total = 0;
	for (int i = 0; i < name.length(); i++)
	{
		total += name[i];
	}
	return total % 10;
}

hash_table_array::hash_table_array()
{
	for (int i = 0; i < 10; i++)
	{
		arr1[i] = NULL;
	}
	count = 0;
}

void hash_table_array::add(string name, int age, int salary, int experience)
{
	node* node1 = new node;
	node1->name = name;
	node1->age = age;
	node1->salary = salary;
	node1->experience = experience;

	int index = hash(name);

	if (arr1[index] == NULL)
	{
		arr1[index] = node1;
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			if (arr1[index + i] == NULL)
			{
				arr1[index + i] = node1;
			}
		}
	}
}

void hash_table_array::remove(string name)
{
	int index = hash(name);

	if (arr1[index] == NULL)
	{
		cout << "Employee not found" << endl;
	}
	else if (arr1[index]->name == name)
	{
		arr1[index] = NULL;
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			if (arr1[index + i]->name == name)
			{
				arr1[index + i] = NULL;
			}
		}
	}
}

void hash_table_array::print()
{
	for (int i = 0; i < 10; i++)
	{
		cout << arr1[i]->name << " - " << arr1[i]->age << " - " << arr1[i]->salary << " - " << arr1[i]->experience << endl;
	}
}

int hash_table_array::collision_rate()
{
	return (count / 9) * 100;
}


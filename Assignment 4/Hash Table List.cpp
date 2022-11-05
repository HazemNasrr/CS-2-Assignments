#include "Hash Table List.h"

using namespace std;

int hash_table_list::hash(string name)
{
	int total = 0;
	for (int i = 0; i < name.length(); i++)
	{
		total += name[i];
	}
	return total % 10;
}

hash_table_list::hash_table_list()
{
	for (int i = 0; i < 10; i++)
	{
		arr1[i] = NULL;
	}
	count = 0;
}

void hash_table_list::add(string name, int age, int salary, int experience)
{
	node* node1;
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
		node* node2 = arr1[index];

		while (node2->next != NULL)
		{
			node2 = node2->next;
		}
		node2->next = node1;
		count++;
	}
}

void hash_table_list::remove(string name)
{
	int index = hash(name);

	if (arr1[index] == NULL)
	{
		cout << "Employee not found" << endl;
	}
	else if (arr1[index]->name == name)
	{
		node* temp = arr1[index];
		arr1[index] = arr1[index]->next;
		delete temp;
	}
	else
	{
		node* node3 = arr1[index], * node4 = arr1[index];
		while (node4->name != name && node4->next == NULL)
		{
			node3 = node4;
			node4 = node4->next;
		}
		if (node4 == NULL)
		{
			cout << "Employee not found" << endl;
		}
		else
		{
			node3->next = node4->next;
			delete node4;
		}
	}
}

void hash_table_list::print()
{
	for (int i = 0; i < 10; i++)
	{
		if (arr1[i] != NULL)
		{
			node* temp = arr1[i];
			cout << temp->name << " - " << temp->age << " - " << temp->salary << " - " << temp->experience << endl;
			temp = temp->next;
		}
	}
}

int hash_table_list::collision_rate()
{
	return (count / 9) * 100;
}
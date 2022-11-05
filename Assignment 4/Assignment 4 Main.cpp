#include <iostream>
#include "Hash Table List.h"
#include "Hash Table Array.h"

int main()
{
	hash_table_list table1;

	table1.add("Mina", 30, 10000, 4);
	table1.add("Fawzy", 45, 5000, 8);
	table1.add("Yara", 19, 2000, 0);
	table1.add("Mariam", 32, 8000, 2);
	table1.add("Ayman", 33, 4000, 8);
	table1.add("Roshdy", 28, 9000, 3);
	table1.add("Aya", 26, 6000, 3);
	table1.add("Abdalla", 29, 7000, 4);
	table1.add("Fatma", 21, 3000, 1);

	table1.print();
	cout << "The collision rate of the linked list hash table is: " << table1.collision_rate() << endl;

	hash_table_array table2;

	table2.add("Mina", 30, 10000, 4);
	table2.add("Fawzy", 45, 5000, 8);
	table2.add("Yara", 19, 2000, 0);
	table2.add("Mariam", 32, 8000, 2);
	table2.add("Ayman", 33, 4000, 8);
	table2.add("Roshdy", 28, 9000, 3);
	table2.add("Aya", 26, 6000, 3);
	table2.add("Abdalla", 29, 7000, 4);
	table2.add("Fatma", 21, 3000, 1);

	table2.print();
	cout << "The collision rate of the dynamic array hash table is: " << table1.collision_rate() << endl;
}
#ifndef Linked_List
#define Linked_List

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class list
{
private:
	class node
	{
	public:
		int value, occurence;
		node* next;

		node()
		{
			value = 0;
			occurence = 0;
			next = NULL;
		}

		node(int v, int o)
		{
			value = v;
			occurence = o;
			next = NULL;
		}
	};

	typedef node* nodepointer;
	nodepointer head, cursor, prev;

public:
	list()
	{
		head = NULL;
		cursor = NULL;
		prev = NULL;
	}

	~list()
	{
		node* temp;
		cursor = head;
		while (cursor->next != NULL)
		{
			temp = cursor;
			cursor = cursor->next;
			delete temp;
		}
	}

	void addnode(int v, int o)
	{
		nodepointer x = new node(v, o);
		if (head == NULL)
		{
			x->next = head;
			head = x;
			cursor = head;
			prev = NULL;
		}
		else
		{
			while (cursor->next != NULL)
			{
				cursor = cursor->next;
			}
			cursor->next = x;
			x->next = NULL;
		}
	}

	void deletenode(int location)
	{
		cursor = head;
		for (int i = 0; i < (location - 1); -i++)
		{
			prev = cursor;
			cursor = cursor->next;
		}
		prev->next = cursor->next;
		delete cursor;
	}

	void print()
	{
		cursor = head;
		while (cursor->next != NULL)
		{
			cout << cursor->value << " , " << cursor->occurence << endl;
			prev = cursor;
			cursor = cursor->next;
		}
		cout << cursor->value << " , " << cursor->occurence << endl;
	}

	void vector_list(vector<int> v)
	{
		int x;

		for (int i = 0; i <= *max_element(v.begin(), v.end()); i++)
		{
			x = count(v.begin(), v.end(), i);
			if (x != 0)
			{
				addnode(i, x);
			}
		}
	}

	void listSum()
	{
		cursor = head;
		int sum = 0;
		while (cursor->next != NULL)
		{
			for (int i = 0; i < cursor->occurence; i++)
			{
				sum += cursor->value;
			}
			cursor = cursor->next;
		}
		for (int i = 0; i < cursor->occurence; i++)
		{
			sum += cursor->value;
		}

		cout << sum;
	}
};



#endif
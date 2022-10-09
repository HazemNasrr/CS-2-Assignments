#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

template <class q>

class queue
{
private:
	int front;
	int rear;
	int counter;
	int maxSize;
	q* values;

public:
	queue(int size = 10);

	bool IsEmpty();

	bool IsFull();

	void push(q x);

	void pop(q& x);

	void DisplayQueue();
};

#endif
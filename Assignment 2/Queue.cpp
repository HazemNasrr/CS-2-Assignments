#include "Queue.h"
#include <iostream>

template <class q>
queue<q>::queue(int size)
{
	values = new y[size];
	maxSize = size;
	front = 0;
	rear = -1;
	counter = 0;
}

template <class q>
bool queue<q>::IsEmpty()
{
	if (counter != 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

template <class q>
bool queue<q>::IsFull()
{
	if (counter < maxSize)
	{
		return false;
	}
	else
	{
		return true;
	}
}

template <class q>
void queue<q>::push(q x)
{
	if (IsFull())
	{
		cout << "Error: The queue is full." << endl;
		return false;
	}
	else
	{
		rear = (rear + 1) % maxSize;
		values[rear] = x;
		counter++;
		return true;
	}
}

template <class q>
void queue<q>::pop(q& x)
{
	if (IsEmpty())
	{
		cout << "Error: The queue is empty." << endl;
		return false;
	}
	else
	{
		x = values[front];
		front = (front + 1) % maxSize;
		counter--;
		return true;
	}
}

template <class q>
void queue<q>::DisplayQueue()
{
	for (int i = 0; i < counter; i++)
	{
		cout << values[(front + i) % maxSize];
	}
}
#ifndef _PRIORITY_QUEUE_H_
#define _PRIORITY_QUEUE_H_

#include "heap.h"

class PriorityQueue 
{
public:
	PriorityQueue();
	~PriorityQueue();
	PriorityQueue(const PriorityQueue&);

	int size();
	void push(int);
	int peek_front();
	int pop_front();
	bool isEmpty();

private:
	Heap _container;
};

#endif

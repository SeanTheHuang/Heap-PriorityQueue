#include "PriorityQueue.h"

PriorityQueue::PriorityQueue()
{

}

PriorityQueue::~PriorityQueue()
{

}


PriorityQueue::PriorityQueue(const PriorityQueue&)
{

}

int PriorityQueue::size() { return _container.size(); }


void PriorityQueue::push(int val) { _container.insert(val); }

int PriorityQueue::peek_front() { return _container.getMin(); }

int PriorityQueue::pop_front()
{
	int val = _container.getMin();
	_container.deleteMin();

	return val;
}

bool PriorityQueue::isEmpty() { return _container.isEmpty(); }
#include "heap.h"

Heap::Heap()
{

}

Heap::Heap(const Heap&)
{

}

Heap::~Heap()
{

}

void Heap::insert(int val)
{
	_container.push_back(val);

	int currentIndex = _container.size() - 1;

	while (currentIndex != 0) {
		int parentIndex = (currentIndex - 1) / 2;
		
		if (_container[currentIndex] < _container[parentIndex]) {
			swapNodes(currentIndex, parentIndex);
			currentIndex = parentIndex;	//Keep looping up
		}
		else {
			break; //Found correct location
		}


	}
}

void Heap::deleteMin()
{
	if (isEmpty()) { return; }

	_container[0] = _container[_container.size() - 1]; //Delete the minimum, last node in becomes head
	_container.pop_back();

	//Travel down tree, fixing heap
	int currentIndex = 0;

	while (true)
	{
		int leftChildIndex = ((currentIndex + 1) * 2) - 1;
		int rightChildIndex = ((currentIndex + 1) * 2);

		bool leftExists = leftChildIndex < _container.size();
		bool rightExists = rightChildIndex < _container.size();

		if (!leftExists && !rightExists) //No children node
		{
			break; //Done
		}
		else if (!rightExists) { //Only left child
			if (_container[leftChildIndex] < _container[currentIndex]) {
				swapNodes(currentIndex, leftChildIndex);
				currentIndex = leftChildIndex;
			}
			else {
				break; //Done
			}
		}
		else if (!leftExists) {	//Only right child
			if (_container[rightChildIndex] < _container[currentIndex]) {
				swapNodes(currentIndex, rightChildIndex);
				currentIndex = rightChildIndex;
			}
			else {
				break; //Done
			}
		}
		else {	//Both left and right child exist
			if (_container[leftChildIndex] < _container[rightChildIndex]) {		//Decide to go left side
				if (_container[leftChildIndex] < _container[currentIndex]) {
					swapNodes(currentIndex, leftChildIndex);
					currentIndex = leftChildIndex;
				}
				else {
					break; //Done with swapping nodes
				}
			}
			else {
				if (_container[rightChildIndex] < _container[currentIndex]) {	//Decide to go right side
					swapNodes(currentIndex, rightChildIndex);
					currentIndex = rightChildIndex;
				}
				else {
					break; //Done with swapping nodes
				}
			}
		}
	}
}

int Heap::getMin()
{
	if (!isEmpty()) {
		return _container[0];
	}
	else {
		return -2147483646;
	}
}

int Heap::size() { return _container.size(); }

bool Heap::isEmpty()
{
	return (_container.size() < 1);
}

void Heap::swapNodes(int index1, int index2)
{
	int temp = _container[index1];

	_container[index1] = _container[index2];
	_container[index2] = temp;
}
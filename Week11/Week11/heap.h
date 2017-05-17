#ifndef _HEAP_H_
#define _HEAP_H_

#include <vector>

using namespace std;

//Note this is a Min-Heap
class Heap
{
public:
	Heap();
	Heap(const Heap&);
	~Heap();

	void insert(int);
	int getMin();
	int size();
	void deleteMin();

	bool isEmpty();

private:
	vector<int> _container;

	void swapNodes(int, int);
};

#endif

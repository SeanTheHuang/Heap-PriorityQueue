#include <iostream>

#include "heap.h"

int main()
{
	Heap test;

	for (int i = 10; i >= 1; i--) {
		test.insert(i);
	}

	test.deleteMin();
	test.deleteMin();



	int hang;
	cin >> hang;
}
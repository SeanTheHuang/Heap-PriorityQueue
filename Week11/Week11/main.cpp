#include <iostream>

#include "PriorityQueue.h"

int main()
{
	PriorityQueue test;

	for (int i = 10; i >= 1; i--) {
		test.push(i);
	}

	for (int i = 0; i < 10; i++)
	{
		cout << test.pop_front() << " ";
	}



	int hang;
	cin >> hang;
}
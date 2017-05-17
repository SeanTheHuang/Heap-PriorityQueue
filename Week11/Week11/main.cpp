#include <conio.h>
#include <iostream>

#include "PriorityQueue.h"

int main()
{
	PriorityQueue test;

	cout << "Put values in order: ";

	for (int i = 10; i >= 1; i--) {
		test.push(i);
		cout << i << " ";
	}

	cout << endl << endl << "Pop values in order: ";

	for (int i = 0; i < 10; i++)
	{
		cout << test.pop_front() << " ";
	}

	int hang = _getch();
}
#include <iostream>

int main()
{
	unsigned int size = 0;

	int t1 = 0, t2 = 1, nextTerm = 0;

	std::cout << "what is the size of the series? ";
	std::cin >> size;
	// increased size by 1 and change the condition, cause size is unsigned
	size++;
	while (size > 0) 
	{
		std::cout << t1 << ", ";

		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;

		size--;
	}

	return 0;
}
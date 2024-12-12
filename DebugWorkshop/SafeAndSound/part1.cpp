#include "part1.h"
#include <iostream>

// needed to increase the size of dest by one, but not in the func
#define DESTSIZE 13

char* string_copy(char* dest, unsigned int destsize, char* src)
{
	destsize--;
	char* ret = dest;
	while (*dest++ = *src++)
		;
	return ret;
}

void part1()
{
	char password[] = "secret";
	char dest[DESTSIZE];
	char src[] = "hello world!";

	string_copy(dest, DESTSIZE, src);

	std::cout << src << std::endl;
	std::cout << dest << std::endl;
}

#include <iostream>

struct Password
{
	char value[16];
	bool incorrect;
	Password() : value(""), incorrect(true)
	{
	}
};

/*
* An example to an input that will work is "1234567890123456".
* 
* This will work due to the reason its 16 chars.
* 
* All inputs of length 16 chars will work, and that because
* the std::cin put a '\n' in the end of the string the user writes,
* and usually that collapses the program if the user's string
* is larger than the size of the string, but here the program won't collapse
* because it doesnt intterupts it, however it will run over the 'incorrect'
* field in the struct-object and put instead of it the '\0' of the
* end of string, which turn the 'incorrect' bool from 1 (incorrect value)
* to 0 (correct value), and that will print the "Congratulations" message.
* 
* This will work in a struct or class, because only there the
* bool 'incorrect' comes for sure right after our string 'value' 
* in the memory.
*/


int main()
{
	std::cout << "Enter your password to continue:" << std::endl;
	Password pwd;
	std::cin >> pwd.value;

	if (!strcmp(pwd.value, "********"))
		pwd.incorrect = false;

	if(!pwd.incorrect)
		std::cout << "Congratulations\n";

	return 0;
}

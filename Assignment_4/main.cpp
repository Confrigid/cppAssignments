#include "strReverse.h"
#include <iostream>

int main() {
	//Get user input
	char input[100];
	std::cout << "Enter input for the program to reverse." << std::endl;
	std::cin.getline(input, 99);

	//Create object and user setter and then run reverse string
	strReverse object;
	object.setString(input);
	object.reverseString();
	//Output using getter, can also output using input due to pointers.
	std::cout << object.getString() << std::endl;
	std::system("pause");

	return 0;
}
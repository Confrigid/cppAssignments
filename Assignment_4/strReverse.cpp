#include "strReverse.h"
//Reverse string using a temp value to swap the rear and front of the userstring.
void strReverse::reverseString()
{
	int counter = 0;
	char * front = userString;
	for (int i = 0; i < *userString; i++) {
		if (userString[i] == '\0') {
			break;
		}
		counter++;
	}
	char * rear = front + counter - 1;

	while (rear > front) {
		char temp = *front;
		*front = *rear;
		*rear = temp;
		front++;
		rear--;
	}
}

//Setter
void strReverse::setString(char * string)
{
	userString = string;
}
//Getter
char * strReverse::getString()
{
	return userString;
}

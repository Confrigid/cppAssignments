#include <iostream>

int main(){
	int maxCount = 0;

	std::cout << "Welcome to FizzBuzz the fancy counting program" << std::endl;
	std::cout << "Please enter the maximum number to count to: ";
	std::cin >> maxCount;

	for (int i = 0; i <= maxCount; i++){
		if (i % 15 == 0){
			std::cout << "FizzBuzz" << std::endl;
		}
		else if (i % 3 == 0){
			std::cout << "Fizz" << std::endl;
		}
		else if (i % 5 == 0){
			std::cout << "Buzz" << std::endl;
		}
		else {
			std::cout << i << std::endl;
		}
	}
	std::cout << "Thanks for playing!" << std::endl;
	system("pause");
	return 0;
}
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

//Pizza class containing all required variables and functions
class Pizza {
public:
	char getSize();
	std::string getType();
	std::vector<bool> getToppings();
	void setSize(const char size);
	void setType(const std::string type);
	void setToppings(const std::vector<bool> toppings);
	void outputDescription();
	double computePrice();
private:
	char pizzaSize;
	std::string pizzaType;
	std::vector<bool> pizzaToppings;


};

//Main
int main() {
	//Simple pizza object, commented out in favor or PIZZA BUILDER 9000.
	/*double price = 0.0;
	Pizza myPizza;
	myPizza.setSize('L');
	myPizza.setType("Pan");
	myPizza.setToppings({ true, true, true, true, true, true, true });
	myPizza.outputDescription();
	price = myPizza.computePrice();
	std::cout << price << std::endl;*/

	//PIZZA BUILDER 9000
	//This code allows a user to build their own pizza, but there is no error checking so mistyped entries are defaulted, and char/string entries skip everything.
	//(Issues will be fixed in PIZZA BUILDER 9001)
	double price = 0.0;
	int size = 0;
	int type = 0;
	int toppingChoice = 0;
	std::vector<std::string> toppingsDisplay = { "Cheese", "Pepperoni", "Onion", "Sausage", "Tomatoes", "Spinach", "Pineapple" };
	std::vector<bool> toppings;
	Pizza myPizza;

	std::cout << "Welcome to the Pizzeria!" << std::endl;
	std::cout << "Please build your pizza now." << std::endl;
	std::cout << "Pizza Size: Enter 1 for Small, 2 for Medium, 3 for Large" << std::endl;
	std::cin >> size;
	switch (size)
	{
	case 1:
		myPizza.setSize('S');
		std::cout << "You have chosen a small pizza." << std::endl;
		break;
	case 2:
		myPizza.setSize('M');
		std::cout << "You have chosen a medium pizza." << std::endl;
		break;
	case 3:
		myPizza.setSize('L');
		std::cout << "You have chosen a large pizza." << std::endl;
		break;
	default:
		//Default to small upon invalid entry
		myPizza.setSize('S');
		std::cout << "Invalid Entry." << std::endl;
		break;
	}
	std::cout << "Pizza Type: 1 for Pan, 2 for Thin, 3 for Hand-Tossed." << std::endl;
	std::cin >> type;
	switch (type)
	{
	case 1:
		myPizza.setType("Pan");
		std::cout << "You have chosen a pan pizza." << std::endl;
		break;
	case 2:
		myPizza.setType("Thin");
		std::cout << "You have chosen a thin crust pizza." << std::endl;
		break;
	case 3:
		myPizza.setType("Hand-Tossed");
		std::cout << "You have chosen a hand-tossed pizza." << std::endl;
		break;
	default:
		//Default to Pan upon invalid entry
		myPizza.setType("Pan");
		std::cout << "Invalid Input." << std::endl;
		break;
	}
	std::cout << "Pizza Toppings: Enter 1 if you want the topping, 0 if you don't." << std::endl;
	for (std::string t : toppingsDisplay) {
		std::cout << t << "?" << std::endl;
		std::cin >> toppingChoice;
		if (toppingChoice == 1) {
			toppings.push_back(true);
		}
		else if (toppingChoice == 0) {
			toppings.push_back(false);
		}
		else {
			//Default to false if invalid entry.
			toppings.push_back(false);
			std::cout << "Invalid Entry." << std::endl;
		}
		myPizza.setToppings(toppings);
	}

	myPizza.outputDescription();
	price = myPizza.computePrice();
	std::cout << "Total Price: $" << price << std::endl;

	std::system("pause");
	return 0;
}

//Getters and Setters
char Pizza::getSize() {
	return pizzaSize;
}

std::string Pizza::getType() {
	return pizzaType;
}

std::vector<bool> Pizza::getToppings() {
	return pizzaToppings;
}

void Pizza::setSize(const char size) {
	pizzaSize = size;
	return;
}

void Pizza::setType(const std::string type){
	pizzaType = type;
	return;
}

void Pizza::setToppings(const std::vector<bool> toppings) {
	pizzaToppings = move(toppings);
}
//End of Getters and Setters

//Output a description of the Pizza
void Pizza::outputDescription() {
	std::string arr[7] = { "Cheese", "Pepperoni", "Onion", "Sausage", "Tomatoes", "Spinach", "Pineapple" };
	char size = getSize();
	std::string type = getType();
	std::vector<bool> toppings = getToppings();
	std::cout << "Pizza Size: " << size << std::endl;
	std::cout << "Pizza Type: " << type << std::endl;
	std::cout << "                ";
	for (std::string x : arr) {
		std::cout << std::left << std::setw(9) << x << " ";
	}
	std::cout << std::endl << "Pizza Toppings: ";
	for (bool n: toppings) {
		if (n == true) {
			std::cout << std::left << std::setw(9) << "Yes" << " ";
		}
		else {
			std::cout << std::left << std::setw(9) << "No" << " ";
		}
	}
	std::cout << std::endl;
}

//Compute the price of the pizza.
//I made the price .01 higher than the assignment specified just to make the decimal appear to show off its double-ness.
double Pizza::computePrice() {
	char size = getSize();
	std::vector<bool> toppings = getToppings();
	double price = 0.0;
	int counter = 0;
	if (size == 'S') {
		for (bool n : toppings) {
			if (n == true) {
				counter++;
			}
			else {

			}
		}
		price = 10.01 + 2.00*counter;
	}
	else if (size == 'M') {
		for (bool n : toppings) {
			if (n == true) {
				counter++;
			}
			else {

			}
		}
		price = 14.01 + 2.00*counter;
	}
	else if (size == 'L') {
		for (bool n : toppings) {
			if (n == true) {
				counter++;
			}
			else {

			}
		}
		price = 17.01 + 2.00*counter;
	}
	return price;
}
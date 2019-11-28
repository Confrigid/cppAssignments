#include "Pizza.h"
#include <vector>
#include <iostream>

//Constructor
Pizza::Pizza(){

}

//Destructor
Pizza::~Pizza(){

}

void Pizza::printRecipe(){
	std::cout << "Pizza Size: " << outputSize[getSize()] << std::endl;
	std::cout << "Pizza Type: " << outputType[getType()] << std::endl;
	std::cout << "Pizza Toppings: ";
	std::vector<PizzaToppings> t;
	t = getToppings();
	for (int i = 0; i < t.size(); i++){
		std::cout << outputToppings[t[i]] << " ";
	}
	std::cout << std::endl;
}

void Pizza::printInstructions(){
	std::cout << "Make a " << outputSize[getSize()] << " " << outputType[getType()] << " crust pizza with ";
	std::vector<PizzaToppings> t = getToppings();
	for (int i = 0; i < t.size(); i++) {
		if (i == t.size() - 1) {
			std::cout << "and " << outputToppings[t[i]] << " ";
		}
		else {
			std::cout << outputToppings[t[i]] << ", ";
		}
	}
	std::cout << "toppings." << std::endl;
}

//Setters
void Pizza::setSize(PizzaSize s){
	size = s;
}

void Pizza::setType(PizzaType t){
	type = t;
}

void Pizza::setToppings(std::vector<PizzaToppings> t){
	toppings = t;
}

//Getters
Pizza::PizzaSize Pizza::getSize(){
	return size;
}

Pizza::PizzaType Pizza::getType(){
	return type;
}

std::vector<Pizza::PizzaToppings> Pizza::getToppings(){
	return toppings;
}
#include "Cake.h"
#include <vector>
#include <iostream>

//Constructor
Cake::Cake() {

}

//Destructor
Cake::~Cake() {

}

void Cake::printRecipe() {
	std::cout << "Cake Size: " << outputSize[getSize()] << std::endl;
	std::cout << "Cake Type: " << outputType[getType()] << std::endl;
}

void Cake::printInstructions() {
	std::cout << "Make a " << outputSize[getSize()] << " cake with " << outputType[getType()] << " frosting." << std::endl;
}

//Setters
void Cake::setSize(CakeSize s) {
	size = s;
}

void Cake::setType(CakeType t) {
	type = t;
}

//Getters
Cake::CakeSize Cake::getSize() {
	return size;
}

Cake::CakeType Cake::getType() {
	return type;
}
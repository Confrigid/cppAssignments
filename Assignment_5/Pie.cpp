#include "Pie.h"
#include <vector>
#include <iostream>

//Constructor
Pie::Pie() {

}

//Destructor
Pie::~Pie() {

}

void Pie::printRecipe() {
	std::cout << "Pie Size: " << outputSize[getSize()] << std::endl;
	std::cout << "Pie Filling: " << outputFilling[getFilling()] << std::endl;
}

void Pie::printInstructions() {
	std::cout << "Make a " << outputSize[getSize()] << " pie with " << outputFilling[getFilling()] << " filling." << std::endl;
}

//Setters
void Pie::setSize(PieSize s) {
	size = s;
}

void Pie::setFilling(PieFilling t) {
	filling = t;
}

//Getters
Pie::PieSize Pie::getSize() {
	return size;
}

Pie::PieFilling Pie::getFilling() {
	return filling;
}
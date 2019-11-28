#include <iostream>
#include "BakedGoods.h"
#include "Cake.h"
#include "Pie.h"
#include "Pizza.h"

//Function Declaration
void printReceipt(BakedGoods* one, BakedGoods* two);
void printInstr(BakedGoods* one, BakedGoods* two);
void printReceipt(BakedGoods* one);
void printInstr(BakedGoods* one);

int main() {
	////Pizza Creation
	Pizza pizza;
	std::vector<Pizza::PizzaToppings> toppings;
	toppings.push_back(Pizza::PizzaToppings::Bacon);
	toppings.push_back(Pizza::PizzaToppings::Pepperoni);
	toppings.push_back(Pizza::PizzaToppings::Cheese);
	toppings.push_back(Pizza::PizzaToppings::Sausage);

	pizza.setSize(Pizza::PizzaSize::Large);
	pizza.setType(Pizza::PizzaType::Thin);
	pizza.setToppings(toppings);

	////Pie Creation
	Pie pie;
	pie.setSize(Pie::PieSize::MINIATURE);
	pie.setFilling(Pie::PieFilling::BANANA_CREME);

	////Cake Creation
	Cake cake;
	cake.setSize(Cake::CakeSize::MEDIUM);
	cake.setType(Cake::CakeType::ICE_CREAM);

	//BakedGoods Pointers
	BakedGoods * bgPizza = &pizza;
	BakedGoods * bgCake = &cake;
	BakedGoods * bgPie = &pie;

	printReceipt(bgCake, bgPie);
	printInstr(bgCake, bgPie);
	printReceipt(bgPizza);
	printInstr(bgPizza);

	std::system("pause");
}

void printReceipt(BakedGoods* one, BakedGoods* two) {
	one->printRecipe();
	std::cout << std::endl;
	two->printRecipe();
	std::cout << std::endl;
}

void printReceipt(BakedGoods* one) {
	one->printRecipe();
	std::cout << std::endl;
}

void printInstr(BakedGoods* one, BakedGoods* two) {
	one->printInstructions();
	std::cout << std::endl;
	two->printInstructions();
	std::cout << std::endl;
}

void printInstr(BakedGoods* one) {
	one->printInstructions();
	std::cout << std::endl;
}
#include "BakedGoods.h"
#include <vector>
#include <string>

class Pizza : public BakedGoods{
public:
	Pizza();
	virtual ~Pizza();
	enum PizzaSize {
		NoSize,
		Small,
		Medium,
		Large
	};
	std::string outputSize[4] = { "NoSize", "Small", "Medium", "Large" };
	enum  PizzaType {
		NoType,
		Thin,
		Deep_Dish,
		Normal
	};
	std::string outputType[4] = { "NoType", "Thin", "Deep Dish", "Normal" };
	enum PizzaToppings{
		NoTopping,
		Cheese,
		Pepperoni,
		Sausage,
		Bacon,
		Chicken,
		Pineapple
	};
	std::string outputToppings[7] = { "NoTopping", "Cheese", "Pepperoni", "Sausage", "Bacon", "Chicken", "Pineapple" };
	void printRecipe();
	void printInstructions();
	void setSize(PizzaSize s);
	void setType(PizzaType t);
	void setToppings(std::vector<PizzaToppings> t);
	PizzaSize getSize();
	PizzaType getType();
	std::vector<PizzaToppings> getToppings();
private:
	PizzaSize size;
	PizzaType type;
	std::vector<PizzaToppings> toppings;
};
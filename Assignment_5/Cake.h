#include "BakedGoods.h"
#include <vector>
#include <string>

class Cake : public BakedGoods {
public:
	Cake();
	virtual ~Cake();
	enum CakeSize {
		NO_SIZE,
		MINIATURE,
		SMALL,
		MEDIUM,
		LARGE
	};
	std::string outputSize[5] = { "NoSize", "Miniature", "Small", "Medium", "Large" };
	enum  CakeType {
		NO_TYPE,
		VANILLA,
		CHOCOLATE,
		FRUIT,
		CARAMEL,
		ICE_CREAM,
		BUTTERCREAM
	};
	std::string outputType[7] = { "No Type", "Vanilla", "Chocolate", "Fruit", "Caramel", "Ice Cream", "Buttercream" };
	void printRecipe();
	void printInstructions();
	void setSize(CakeSize s);
	void setType(CakeType t);
	CakeSize getSize();
	CakeType getType();
private:
	CakeSize size;
	CakeType type;
};
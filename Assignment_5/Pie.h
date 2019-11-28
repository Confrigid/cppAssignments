#include "BakedGoods.h"
#include <vector>
#include <string>

class Pie : public BakedGoods {
public:
	Pie();
	virtual ~Pie();
	enum PieSize {
		NO_SIZE,
		MINIATURE,
		SMALL,
		MEDIUM,
		LARGE
	};
	std::string outputSize[5] = { "NoSize", "Miniature", "Small", "Medium", "Large" };
	enum  PieFilling {
		NO_FILLING,
		CHOCOLATE_MOUSSE,
		APPLE,
		BLACKBERRY,
		BLUEBERRY,
		BANANA_CREME,
		BOSTON_CREAM
	};
	std::string outputFilling[7] = { "No Filling", "Choclate Mousse", "Apple", "Blackberry", "Blueberry", "Banana Creme", "Boston Cream" };
	void printRecipe();
	void printInstructions();
	void setSize(PieSize s);
	void setFilling(PieFilling t);
	PieSize getSize();
	PieFilling getFilling();
private:
	PieSize size;
	PieFilling filling;
};
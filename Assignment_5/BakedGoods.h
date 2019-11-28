#ifndef BAKEDGOODS_H
#define BAKEDGOODS_H

class BakedGoods{
private:
	
public:
	BakedGoods() {};
	virtual ~BakedGoods() {};
	virtual void printRecipe() = 0;
	virtual void printInstructions() = 0;
};
#endif
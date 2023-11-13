#pragma once
#include <iostream>
using namespace std;

#include "BuilderClass.h"
#include "RichOrder.h"
class RichBuilder : public BuilderClass
{
private:
	RichOrder* order = new RichOrder();

public:
	void reset() override;

	void buildDrink() override;
	void buildDish() override;
	void buildDessert() override;

	Order* getbuild() override;
};
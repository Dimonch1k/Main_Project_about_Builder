#pragma once
#include <iostream>
using namespace std;

#include "Order.h"
class BuilderClass
{
public:
	virtual void reset() = 0;
	virtual void buildDrink() = 0;
	virtual void buildDish() = 0;
	virtual void buildDessert() = 0;

	virtual Order* getbuild() = 0;
};


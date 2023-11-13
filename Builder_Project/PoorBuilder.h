#pragma once
#include <iostream>
using namespace std;

#include "BuilderClass.h"
#include "PoorOrder.h"
class PoorBuilder : public BuilderClass
{
private:
	PoorOrder* order = new PoorOrder();

public:
	void reset() override;

	void buildDrink() override;
	void buildDish() override;
	void buildDessert() override;

	Order* getbuild() override;
};


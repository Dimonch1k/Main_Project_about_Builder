#pragma once
#include <iostream>
#include <vector>
using namespace std;


class Order
{
public:
	virtual void setDrink(string text) = 0;
	virtual void setDish(string text) = 0;
	virtual void setDessert(string text) = 0;

	virtual vector<string> getResult() = 0;
};


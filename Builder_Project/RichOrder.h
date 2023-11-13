#pragma once
#include <iostream>
#include <vector>
using namespace std;


#include "Order.h"
class RichOrder : public Order
{
private:
	vector<string> rich_orders;

public:
	void setDrink(string text) override;
	void setDish(string text) override;
	void setDessert(string text) override;

	vector<string> getResult() override;
};
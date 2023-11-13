#include "RichOrder.h"


void RichOrder::setDrink(string text)
{
	rich_orders.push_back(text);
}

void RichOrder::setDish(string text)
{
	rich_orders.push_back(text);
}

void RichOrder::setDessert(string text)
{
	rich_orders.push_back(text);
}

vector<string> RichOrder::getResult()
{
	return this->rich_orders;
}
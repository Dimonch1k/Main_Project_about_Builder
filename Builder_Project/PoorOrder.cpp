#include "PoorOrder.h"



void PoorOrder::setDrink(string text)
{
	poor_orders.push_back(text);
}

void PoorOrder::setDish(string text)
{
	poor_orders.push_back(text);
}

void PoorOrder::setDessert(string text)
{
	poor_orders.push_back(text);
}

vector<string> PoorOrder::getResult()
{
	return this->poor_orders;
}
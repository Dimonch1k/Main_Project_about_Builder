#include "RichBuilder.h"


void RichBuilder::reset() {
	this->order = new RichOrder();
}

void RichBuilder::buildDrink() {
	order->setDrink("Rich drink");
}

void RichBuilder::buildDish()
{
	order->setDish("Rich dish");
}

void RichBuilder::buildDessert()
{
	order->setDessert("Rich dessert");
}

Order* RichBuilder::getbuild()
{
	RichOrder* tempOrder = order;
	reset();
	return tempOrder;
}
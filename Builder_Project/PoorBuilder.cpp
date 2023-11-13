#include "PoorBuilder.h"


void PoorBuilder::reset() {
	this->order = new PoorOrder();
}

void PoorBuilder::buildDrink() {
	order->setDrink("Poor drink");
}

void PoorBuilder::buildDish()
{
	order->setDish("Poor dish");
}

void PoorBuilder::buildDessert()
{
	order->setDessert("Poor dessert");
}

Order* PoorBuilder::getbuild()
{
	PoorOrder* tempOrder = this->order;
	reset();
	return tempOrder;
}
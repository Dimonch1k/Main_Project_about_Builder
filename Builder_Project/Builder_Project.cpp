#include <iostream>
#include <vector>

using namespace std;

#include "BuilderClass.h"

#include "PoorBuilder.h"
#include "RichBuilder.h"


#include "Order.h"

#include "PoorOrder.h"
#include "RichOrder.h"


void printVec(vector<string> vec);
int main()
{
	BuilderClass* poorBuilder = new PoorBuilder();
	BuilderClass* richBuilder = new RichBuilder();


	richBuilder->buildDrink();
	richBuilder->buildDish();
	richBuilder->buildDessert();

	Order* richOrder = richBuilder->getbuild();
	cout << "\nRich order:\n\t";
	printVec(richOrder->getResult());



	poorBuilder->buildDrink();
	poorBuilder->buildDish();
	poorBuilder->buildDessert();

	Order* poorOrder = poorBuilder->getbuild();
	cout << "\n\nPoor order:\n\t";
	printVec(poorOrder->getResult());

	cout << "\n\n\n";
}


void printVec(vector<string> vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << "\n\t";
	}
}
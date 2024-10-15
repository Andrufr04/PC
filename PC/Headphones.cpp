#include "Headphones.h"

Headphones::Headphones()
{
	name = "Unlnown";
	price = 0;
}

Headphones::Headphones(string n, double p)
{
	name = n;
	price = p;
}

void Headphones::Output()
{
	cout << "HEADPHONES:\tmodel: " << name << "\tprice: " << price << endl;
}

double Headphones::GetPrice()
{
	return price;
}

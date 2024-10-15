#include "RAM.h"

RAM::RAM()
{
	name = "Unlnown";
	price = 0;
}

RAM::RAM(string n, double p)
{
	name = n;
	price = p;
}

void RAM::Output()
{
	cout << "RAM:       \tmodel: " << name << "\tprice: " << price << endl;
}

double RAM::GetPrice()
{
	return price;
}
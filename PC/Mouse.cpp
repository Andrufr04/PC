#include "Mouse.h"

Mouse::Mouse()
{
	name = "Unlnown";
	price = 0;
}

Mouse::Mouse(string n, double p)
{
	name = n;
	price = p;
}

void Mouse::Output()
{
	cout << "MOUSE:     \tmodel: " << name << "\tprice: " << price << endl;
}

double Mouse::GetPrice()
{
	return price;
}

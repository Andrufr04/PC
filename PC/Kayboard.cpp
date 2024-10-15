#include "Kayboard.h"

Kayboard::Kayboard()
{
	name = "Unlnown";
	price = 0;
}

Kayboard::Kayboard(string n, double p)
{
	name = n;
	price = p;
}

void Kayboard::Output()
{
	cout << "KAYBOARD:\tmodel: " << name << "\tprice: " << price << endl;
}

double Kayboard::GetPrice()
{
	return price;
}

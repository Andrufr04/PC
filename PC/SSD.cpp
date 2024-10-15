#include "SSD.h"

SSD::SSD()
{
	name = "Unlnown";
	price = 0;
}

SSD::SSD(string n, double p)
{
	name = n;
	price = p;
}

void SSD::Output()
{
	cout << "SSD:       \tmodel: " << name << "\tprice: " << price << endl;
}

double SSD::GetPrice()
{
	return price;
}
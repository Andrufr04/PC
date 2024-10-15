#include "Monitor.h"

Monitor::Monitor()
{
	name = "Unlnown";
	price = 0;
}

Monitor::Monitor(string n, double p)
{
	name = n;
	price = p;
}

void Monitor::Output()
{
	cout << "MONITOR:\tmodel: " << name << "\tprice: " << price << endl;
}

double Monitor::GetPrice()
{
	return price;
}

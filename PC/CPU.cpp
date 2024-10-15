#include "CPU.h"

CPU::CPU()
{
	name = "Unlnown";
	price = 0;
}

CPU::CPU(string n, double p)
{
	name = n;
	price = p;
}

void CPU::Output()
{
	cout << "CPU:       \tmodel: " << name << "\tprice: " << price << endl;
}

double CPU::GetPrice()
{
	return price;
}
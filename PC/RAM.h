#pragma once

#include <iostream>
using namespace std;

class RAM
{
	string name;
	double price;
public:
	RAM();
	RAM(string n, double p);
	void Output();
	double GetPrice();
};

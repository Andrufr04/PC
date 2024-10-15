#pragma once

#include <iostream>
using namespace std;

class SSD
{
	string name;
	double price;
public:
	SSD();
	SSD(string n, double p);
	void Output();
	double GetPrice();
};

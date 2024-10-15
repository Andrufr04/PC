#pragma once

#include <iostream>
using namespace std;

class Monitor
{
	string name;
	double price;
public:
	Monitor();
	Monitor(string n, double p);
	void Output();
	double GetPrice();
};


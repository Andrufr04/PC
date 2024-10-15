#pragma once

#include <iostream>
using namespace std;

class Mouse
{
	string name;
	double price;
public:
	Mouse();
	Mouse(string n, double p);
	void Output();
	double GetPrice();
};
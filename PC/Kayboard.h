#pragma once

#include <iostream>
using namespace std;

class Kayboard
{
	string name;
	double price;
public:
	Kayboard();
	Kayboard(string n, double p);
	void Output();
	double GetPrice();
};

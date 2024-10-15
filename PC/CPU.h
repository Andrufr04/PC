#pragma once

#include <iostream>
using namespace std;

class CPU
{
	string name;
	double price;
public:
	CPU();
	CPU(string n, double p);
	void Output();
	double GetPrice();
};

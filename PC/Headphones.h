#pragma once

#include <iostream>
using namespace std;

class Headphones
{
	string name;
	double price;
public:
	Headphones();
	Headphones(string n, double p);
	void Output();
	double GetPrice();
};
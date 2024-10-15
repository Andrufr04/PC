#include <iostream>

#include "PC.h"

using namespace std;

int main()
{
	Monitor mon("ooo", 10);
	Mouse mou("mmm", 20);
	Kayboard kay("kkk", 30);
	Headphones hea("hhh", 40);

	PC MyPC(&mon, &kay, &mou, &hea, "rrr", 100, "ccc", 200, "sss", 100);
	MyPC.Output();

	cout << endl << "Total Price: " << MyPC.GetPrise() <<endl;
	



















	










	return 0;
}
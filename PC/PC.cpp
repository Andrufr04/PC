#include "PC.h"

PC::PC(Monitor* mon, Kayboard* kay, Mouse* mou, Headphones* hea, string ramName, double ramPrice, string cpuName, double cpuPrice, string ssdName, double ssdPrice) :
	monitor(mon), 
	kayboard(kay), 
	mouse(mou), 
	headphones(hea), 
	ram(ramName, ramPrice),
	cpu(cpuName, cpuPrice),
	ssd(ssdName, ssdPrice)
{
}

void PC::Output()
{
	monitor->Output();
	kayboard->Output();
	mouse->Output();
	headphones->Output();

	ram.Output();
	cpu.Output();
	ssd.Output();
}

double PC::GetPrise()
{
	return monitor->GetPrice() + kayboard->GetPrice() + mouse->GetPrice() + headphones->GetPrice() + ram.GetPrice() + cpu.GetPrice() + ssd.GetPrice();
}

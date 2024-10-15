#pragma once

#include "Mouse.h"
#include "Kayboard.h"
#include "Monitor.h"
#include "Headphones.h"
#include "RAM.h"
#include "CPU.h"
#include "SSD.h"

class PC
{
	Monitor* monitor;
	Kayboard* kayboard;
	Mouse* mouse;
	Headphones* headphones;

	RAM ram;
	CPU cpu;
	SSD ssd;

public:
	PC(Monitor* mon, Kayboard* kay, Mouse* mou, Headphones* hea,    string ramName, double ramPrice, string cpuName, double cpuPrice, string ssdName, double ssdPrice);
	void Output();
	double GetPrise();
};


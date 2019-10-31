#include "stdafx.h"
#include "Printer.h"


Printer::Printer() :x{ 10 }
{
}


Printer::~Printer()
{
}


int Printer::print() const
{
	//x = 20; // This line will produce an error because print is const.
	cout << "print....";
	return 0;
}

void Printer::set_x(int value)
{
	x = value;
}

int Printer::get_x()
{
	return this->x;
}
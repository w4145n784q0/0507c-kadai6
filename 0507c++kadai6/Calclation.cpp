#include "Calclation.h"
#include<iostream>

void Calclation::SetA(float _a)
{
	a = _a;
}

void Calclation::SetB(float _b)
{
	b = _b;
}

void Calclation::Disp()
{
	plus = a + b;
	minus = a - b;
	std::cout << a << " + " << b << " = " << plus << std::endl;
	std::cout << a << " - " << b << " = " << minus << std::endl;
}

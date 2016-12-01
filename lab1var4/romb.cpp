#include "romb.h"

#include <iostream>
#include <math.h>

Romb::Romb()
{
    d1 = 0;
    d2 = 0;
}

Romb::Romb(double _d1, double _d2)
{
    d1 = _d1;
    d2 = _d2;
}

Romb::~Romb()
{}

double Romb::GetSquare()
{
    return 0.5 * d1 * d2;
}

void Romb::PrintName()
{
    std::cout << "Romb!" << std::endl;
}

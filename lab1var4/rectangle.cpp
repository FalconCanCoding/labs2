#include "rectangle.h"

#include <iostream>

Rectangle::Rectangle(double _a, double _b)
{
    std::cout << "Rectangle Constructor called!" << std::endl;

    a = _a;
    b = _b;
}

Rectangle::~Rectangle()
{
    std::cout << "Rectangle Destructor called!" << std::endl;
}

double Rectangle::GetSquare()
{
    return a*b;
}

void Rectangle::PrintName()
{
    std::cout << "Rectangle!" << std::endl;
}



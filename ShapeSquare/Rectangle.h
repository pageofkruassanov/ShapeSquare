#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
	double* a;
	double* b;
public:
	Rectangle(int x, int y, double a, double b) : Shape{ x, y }, a{ new double(a) }, b{ new double(b) } {};
	string getName();
	double Square();
	~Rectangle();
};


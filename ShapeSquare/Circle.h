#pragma once
#include "Shape.h"
#define P 3.14
class Circle : public Shape
{
	double* radius;
public:
	Circle(int x, int y, double radius) : Shape{ x, y }, radius{ new double(radius) } {};
	string getName();
	double Square();
	~Circle();
};


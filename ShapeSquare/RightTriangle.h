#pragma once
#include "Shape.h"
#include <cmath>
class RightTriangle : public Shape
{
	double* a;
	double* b;
	double* c;
public:
	RightTriangle(int x, int y, double a, double b) : Shape{ x, y }, a{ new double(a) }, b{ new double(b) }, c{ new double(sqrt((b * b) + (a * a))) } {};
	string getName();
	double Square();
	~RightTriangle();
};


#pragma once
#include "Shape.h"
class IsoscelesTrapezium : public Shape
{
	double* a;
	double* b;
	// middle line:
	double* m;
	// height:
	double* h;
public:
	IsoscelesTrapezium(int x, int y, double a, double b, double height) : Shape{ x, y }, a{ new double(a) }, b{ new double(b) }, h{ new double(height) }, m{ new double((a + b) / 2) } {};
	string getName();
	double Square();
	~IsoscelesTrapezium();
};


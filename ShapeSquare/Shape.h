#pragma once
#include <iostream>
using namespace std;
class Shape
{
protected:
	int* x;
	int* y;
public:
	Shape(int x, int y) : x{ new int(x) }, y{ new int(y) } {};
	virtual string getName() = 0;
	virtual double Square() = 0;
	virtual ~Shape();
};


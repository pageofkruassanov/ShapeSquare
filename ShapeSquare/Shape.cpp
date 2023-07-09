#include "Shape.h"

Shape::~Shape()
{
	cout << "Im Shape desctructor!" << endl;
	delete x;
	delete y;
}

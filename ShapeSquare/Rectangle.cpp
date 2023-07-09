#include "Rectangle.h"

string Rectangle::getName()
{
    return "rectangle";
}

double Rectangle::Square()
{
    return *a * *b;
}

Rectangle::~Rectangle()
{
    cout << "Im Rectangle destructor" << endl;
    delete a;
    delete b;
}

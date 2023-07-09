#include "Circle.h"

string Circle::getName()
{
    return "circle";
}

double Circle::Square()
{
    return (P * (*radius * *radius));
}

Circle::~Circle()
{
    cout << "Im Circle destructor" << endl;
    delete radius;
}

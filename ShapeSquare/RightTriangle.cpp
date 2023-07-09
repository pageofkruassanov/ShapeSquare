#include "RightTriangle.h"

string RightTriangle::getName()
{
    return "right triangle";
}

double RightTriangle::Square()
{
    return (*a * *b / 2);
}

RightTriangle::~RightTriangle()
{
    cout << "Im RightTriangle destructor" << endl;
    delete a;
    delete b;
    delete c;
}

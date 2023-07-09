#include "IsoscelesTrapezium.h"

string IsoscelesTrapezium::getName()
{
    return "isosceles trapezium";
}

double IsoscelesTrapezium::Square()
{
    return *h * *m;
}

IsoscelesTrapezium::~IsoscelesTrapezium()
{
    cout << "Im IsoscelesTrapezium destructor";
    delete a;
    delete b;
    delete m;
    delete h;
}

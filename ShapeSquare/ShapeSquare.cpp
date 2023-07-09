#include <iostream>
#include "Rectangle.h"
#include "RightTriangle.h"
#include "Shape.h"
#include "Circle.h"
#include "IsoscelesTrapezium.h"

int main()
{
    const int sizeShape = 4;
    Shape* shape[sizeShape] = { new Rectangle(1,1,10.4,20.5), new RightTriangle(1,1, 10.4, 5.5), new Circle(1,1, 5.5), new IsoscelesTrapezium(1,1,10.5,19,5.9) };
    for (auto el : shape) {
        cout << "Square " << el->getName() << ": " << el->Square() << " cm^2." << endl;
    }
}
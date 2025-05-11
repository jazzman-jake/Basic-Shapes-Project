#include <iostream>
#include <vector>
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

int main() {
    vector<BasicShape*> shapes;

    shapes.push_back(new Circle(0, 0, 5, "Small Circle"));
    shapes.push_back(new Circle(3, 4, 10, "Large Circle"));
    shapes.push_back(new Rectangle(4, 6, "Wide Rectangle"));
    shapes.push_back(new Rectangle(2, 10, "Tall Rectangle"));
    shapes.push_back(new Square(7, "Perfect Square"));

    cout << "Shape Summary:\n";
    for (BasicShape* shape : shapes) {
        cout << shape->getName() << " - Area: " << shape->getArea() << '\n';
    }

    for (BasicShape* shape : shapes)
        delete shape;

    return 0;
}

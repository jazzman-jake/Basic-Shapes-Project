#pragma once

#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

class Square : public Rectangle {
private:
    double side;

public:
    Square(double s, const string& n = "Square")
        : Rectangle(s, s, n), side(s) {
        setName(n); // Call again to set correct name in base
    }

    double getSide() const { return side; }
};

#endif



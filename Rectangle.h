#pragma once

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "BasicShape.h"

class Rectangle : public BasicShape {
private:
    double length, width;

public:
    Rectangle(double l, double w, const string& n = "Rectangle")
        : length(l), width(w) {
        setName(n);
        calcArea();
    }

    void calcArea() override {
        setArea(length * width);
    }

    double getLength() const { return length; }
    double getWidth() const { return width; }
};

#endif



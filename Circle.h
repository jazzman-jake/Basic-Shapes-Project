#pragma once

#ifndef CIRCLE_H
#define CIRCLE_H

#include "BasicShape.h"
#include <cmath>

class Circle : public BasicShape {
private:
    double M_PI, xCenter, yCenter, radius;

public:
    Circle(double x, double y, double r, const string& n = "Circle")
        : xCenter(x), yCenter(y), radius(r) {
        setName(n);
        calcArea();
    }

    void calcArea() override {
        setArea(M_PI * radius * radius);
    }

    double getX() const { return xCenter; }
    double getY() const { return yCenter; }
    double getRadius() const { return radius; }
};

#endif



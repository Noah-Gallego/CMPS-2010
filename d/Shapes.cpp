#include <string>
#include <cmath>
#include "Shapes.h"

const double PI = 3.14159;

// RECTANGLE FUNCTION DEFINITIONS
double Rectangle::getPerimeter(){
    return (width + height) * 2;
}

double Rectangle::getArea(){
    return width * height;
}

std::string Rectangle::toString(){
    std::string output = "";

    output += "SHAPE: " + label + "\n";
    output += "WIDTH: " + std::to_string(width) + "\n";
    output += "HEIGHT: " + std::to_string(height) + "\n";
    output += "AREA: " + std::to_string(getArea()) + " (square units)\n";
    output += "CIRC: "   + std::to_string(getPerimeter()) + "\n";

    return output;
}

// TRIANGLE FUNCTION DEFINITIONS
double Triangle::getArea() {
    return 0.5 * (base * height);
}

std::string Triangle::toString() {
    std::string output = "";

    output += "SHAPE: " + label + "\n";
    output += "BASE: " + std::to_string(base) + "\n";
    output += "HEIGHT: " + std::to_string(height) + "\n";
    output += "AREA: " + std::to_string(getArea()) + "\n";

    return output;
}

// CIRCLE FUNCTION DEFINITIONS
double Circle::getCircum() {
    return (2 * PI * radius);
}

double Circle::getDiameter() {
    return 2 * radius;
}

double Circle::getArea() {
    return PI * pow(radius, 2);
}

std::string Circle::toString() {
    std::string output = "";

    output += "SHAPE: " + label + "\n";
    output += "RADIUS " + std::to_string(radius) + "\n";
    output += "DIAMETER " + std::to_string(getDiameter()) + "\n";
    output += "CIRCUMFERENCE: " + std::to_string(getCircum()) + "\n";
    output += "AREA: " + std::to_string(getArea()) + "\n";

    return output;
}

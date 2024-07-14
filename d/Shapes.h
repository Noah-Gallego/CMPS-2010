#ifndef SHAPES_H
#define SHAPES_H
#include <string>

// SHAPE CLASS DECLARATION
class Shape{
    protected:
        std::string label;
    
    public:
        virtual double getArea() = 0;
        virtual std::string toString() = 0;

        void setLabel(std::string label){
            this->label = label;
        }
};

// RECTANGLE CLASS DECLARATION
class Rectangle : public Shape{
    protected:
        double width;
        double height;
    
    public:
        Rectangle(double width, double height){
            this->width = width;
            this->height = height;
            setLabel("Rectangle");
        }

        double getPerimeter();
        double getArea();
        std::string toString();
};

// SQUARE CLASS DECLARATION
class Square : public Rectangle {
    public:
         Square(double length) : Rectangle(length, length) {
             setLabel("Square");
         }
};


// TRIANGLE CLASS DECLARATION
class Triangle : public Shape {
    private:
        double base;
        double height;
    public:
        Triangle(double base, double height) {
            this->base = base;
            this->height = height;
            setLabel("Triangle");
        }

        double getArea();
        std::string toString();
};

// CIRCLE CLASS DECLARATION
class Circle : public Shape {
    private:
        double radius;
    public:
        Circle(double radius) {
            this->radius = radius;
            setLabel("Circle");
        }

        double getDiameter();
        double getCircum();
        double getArea();
        std::string toString();
};

#endif

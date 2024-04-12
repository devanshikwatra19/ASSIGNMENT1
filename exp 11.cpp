#include <iostream>
#include <cmath>
using namespace std;


class Shape {
public:
    virtua double area() const = 0; 
     double perimeter() const = 0; 
    ~Shape() = default; 
};

class Circle : 
public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area()  {
        return M_PI * radius * radius;
    }

    double perimeter() const override {
        return 2 * M_PI * radius;
    }
};

class Rectangle :
 public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }

    double perimeter() const override {
        return 2 * (length + width);
    }
};


class Triangle :
 public Shape {
private:
    double side1;
    double side2;
    double side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    double area() {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double perimeter() {
        return side1 + side2 + side3;
    }
};

int main() {
    Circle circle(5);
    Rectangle rectangle(4, 6);
    Triangle triangle(3, 4, 5);

    
    Shape* shapes[] = { &circle, &rectangle, &triangle };

    for (auto shape : shapes) {
cout << "Area: " << shape->area() <<endl;
cout << "Perimeter: " << shape->perimeter() << endl;
cout << endl;
    }

    return 0;
}

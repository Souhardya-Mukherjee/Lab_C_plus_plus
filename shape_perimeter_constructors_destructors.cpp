#include <iostream>
using namespace std;

class Shape {
    double radius;
    double length;
    double width;

public:
    Shape(double r) {
        radius = r;
        length = 0;
        width = 0;
        cout << "Circle object created with constructor." << endl;
    }

    Shape(double l, double w) {
        radius = 0;
        length = l;
        width = w;
        cout << "Rectangle object created with constructor." << endl;
    }

    void calculatePerimeter() {
        if (radius > 0) {
            double perimeter = 2 * 3.14159 * radius;
            cout << "Perimeter of Circle = " << perimeter << endl;
        } else {
            double perimeter = 2 * (length + width);
            cout << "Perimeter of Rectangle = " << perimeter << endl;
        }
    }

    ~Shape() {
        cout << "Destructor called for Shape object." << endl;
    }
};

int main() {
    cout << "--- Circle Operations ---" << endl;
    Shape circle(5.0);
    circle.calculatePerimeter();

    cout << "\n--- Rectangle Operations ---" << endl;
    Shape rectangle(4.0, 6.0);
    rectangle.calculatePerimeter();

    cout << "\nExiting main..." << endl;
    return 0;
}

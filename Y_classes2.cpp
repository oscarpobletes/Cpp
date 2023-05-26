#include <iostream>

using namespace std;

// Rectangle class
class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double rectLength, double rectWidth)
        : length(rectLength), width(rectWidth) {}

    // Member function to calculate the area of the rectangle
    double calculateArea() {
        return length * width;
    }

    // Member function to calculate the perimeter of the rectangle
    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    // Create a Rectangle object
    Rectangle rectangle(5.0, 3.0);

    // Calculate and display the area of the rectangle
    double area = rectangle.calculateArea();
    cout << "Area: " << area << endl;

    // Calculate and display the perimeter of the rectangle
    double perimeter = rectangle.calculatePerimeter();
    cout << "Perimeter: " << perimeter << endl;

    return 0;
}




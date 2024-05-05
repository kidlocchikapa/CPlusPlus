#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    Rectangle rectangle;

    // Get length and width from user input
    cout << "Enter the length of the rectangle: ";
    float length;
    cin >> length;
    rectangle.setLength(length);

    cout << "Enter the width of the rectangle: ";
    float width;
    cin >> width;
    rectangle.setWidth(width);

    // Calculate and output the area
    cout << "The area of the rectangle is: " << rectangle.calculateArea() << endl;

    return 0;
}
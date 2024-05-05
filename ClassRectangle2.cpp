#include <iostream>
#include "Header2.h"
using namespace std;

int main() {
    Rectangle rectangle1;

    // Get length and width from user input
    cout << "Enter the length of the rectangle: ";
    float length;
    cin >> length;
    rectangle1.setLength(length);

    cout << "Enter the width of the rectangle: ";
    float width;
    cin >> width;
    rectangle1.setWidth(width);

    // Calculate and output the area
    cout << "The area of the rectangle is: " << rectangle1.calculateArea() << endl;

    // Create another instance of a rectangle using the overloaded constructor
    cout << "Enter the length of the second rectangle: ";
    float length2;
    cin >> length2;

    cout << "Enter the width of the second rectangle: ";
    float width2;
    cin >> width2;

    Rectangle rectangle2(length2, width2);

    // Output the area of the second rectangle
    cout << "The area of the second rectangle is: " << rectangle2.calculateArea() << endl;

    return 0;
}
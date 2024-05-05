#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "CircleHeader.h"
#include "AreaHeader.h"

using namespace std;

int main() {
    int choice;
    while (true) {
        cout << "1. Calculate the area of a square" << endl;
        cout << "2. Calculate the area of a triangle" << endl;
        cout << "3. Calculate the area of a circle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                float side;
                cout << "Enter the side length of the square: ";
                cin >> side;
                shapes::Square square(side);
                float area = Area::calculateSquareArea(square);
                cout << "The area of the square is: " << area << endl;
                break;
            }
            case 2: {
                float base, height;
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                shapes::Triangle triangle(base, height);
                float area = Area::calculateTriangleArea(triangle);
                cout << "The area of the triangle is: " << area << endl;
                break;
            }
            case 3: {
                float radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                shapes::Circle circle(radius);
                float area = Area::calculateCircleArea(circle);
                cout << "The area of the circle is: " << area << endl;
                break;
            }
            case 4:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
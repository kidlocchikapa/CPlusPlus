#include <iostream>
using namespace std;

double CalculateArea(int choice, double dimensions[]){
    double area;
    switch(choice){
        case 1:
        area = dimensions [0] * dimensions[0];
        break;

        case 2: 
        area = 0.5 * dimensions[0] * dimensions[1]; //Triangle 
        break;

        case 3: 
        area = dimensions[0] * dimensions [1]; // Rectangle
        break;

        default:
        area =0;
    }

    return area;
}
int main(){
    int choice;
    double dimensions[2];
    string shapes [] = {"Square", "Triangle", "Rectangle", "Quit"};

    while(true){
        cout << "Choose a shape to calculate its area :" << endl;
        for(int i = 0; i < 4; i++){
            cout << i + 1 << "." << shapes[i] << endl;
        }
        cin >> choice;
        if (choice == 4){
            return 0;
        }
        cout << "Enter the dimendions of the " << shapes [choice - 1] << "." << endl;
        for (int i = 0; i < (choice == 1 ? 1 : 2); i++){
            cin >> dimensions[i];
        }
        double area = CalculateArea(choice, dimensions);
        cout << "The area of a " << shapes [choice - 1] << " is: " << area << endl;
    
    }
    return 0;
}

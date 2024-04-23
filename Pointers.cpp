#include <iostream>
using namespace std ;

int main(){
    int firstValue;
    int secondValue;

    int* pPointer = nullptr;

    //Assign pointer with address of firstValue 
    pPointer = &firstValue;
    *pPointer = 10; //indirection 

    //assign pointer with the address of second value 
    pPointer = &secondValue;
    *pPointer = 20; //indirection 

    cout << "firstValaue is " << firstValue << '\n';
    cout << "secondValue is " << secondValue << '\n';
    return 0;
}
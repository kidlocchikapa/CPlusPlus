#include <iostream>
using namespace std;

int main (){

    //declare pointer and initialize it 
    //so that it doesnt store a random number
    int* pPointer = nullptr;
    int integerVar = 5;
    
    //assign pointer to address of object
    pPointer = &integerVar;
    //output the value of integerVar
    cout << "IntegerVar: " << integerVar << endl;

    //output the address of integerVar 
    cout << "The address of integerVar: " << &integerVar << endl;

    //output of address assigned to pPointer
    cout << "pPointer :" << pPointer << endl;

    //output the address of pPointer 
    cout << "Address of pPointer :" <<&pPointer <<endl;

    return 0;

    

}

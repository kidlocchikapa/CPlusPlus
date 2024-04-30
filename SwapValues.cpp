#include <iostream>
using namespace std;

void Swap(int &a, int &b);

int main(){
    int varA = 25;
    int varB = 100;

    cout << "VarA before swap: " << varA << endl; // varA is 25
    cout << "varB before swap: " << varB << endl;  // varB is 100
    Swap(varA, varB);

    cout << "varA after swap: " << varA <<endl; // varA is 100
    cout << "varB after swap: " << varB << endl; // varB is 25
return 0;
}
 void swap(int &a, int &b){
        int temp = a;
        a = b;
        b =temp;
    }
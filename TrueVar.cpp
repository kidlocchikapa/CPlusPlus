#include <iostream>
using namespace std;

int main(){
    int Num;
    while(true){
        cout <<"Enter a value between 5 and 10"<< endl;
        if (cin >> Num && Num >= 5 && Num <= 10){
            cout << "Your input value " << Num <<"has been accepted" << endl; break;
        }
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid input.please try again.\n"<<endl;
    }

    return 0;
}
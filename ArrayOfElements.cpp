#include <iostream>
#include <array>

using namespace std;
int main(){
        string elements [8] = {"B123", "C234", "A345", "C15", "B177", "G303", "C235", "B179"};
    for (int i = 0; i < 8; i++){
        if (elements[i][0] == 'B'){
            cout <<elements <<endl;
        }
    }
    return 0;
}
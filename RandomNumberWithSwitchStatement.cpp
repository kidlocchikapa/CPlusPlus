#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

 srand(time(0));
int daysUntilExpilation = rand()%12;

cout << "The random number is: " << daysUntilExpilation<< endl;
switch (daysUntilExpilation){
    case 10: cout << "Your subscription will expire soon. Renew now!" << endl; break;
    case 5:  cout << "Your subscription expires in " << daysUntilExpilation << endl; 
             cout << "Renew now and save 10%"<< endl; break;
    case 1:  cout << "Your subscription expires within a day!"<< endl;
             cout << "Renew now and save 20%"<<endl; break;
    case 0:  cout << "Your subscription has expired"<< endl; break;
    default : cout <<"you have an active subscription."<< endl;break;
}
    return 0;
}
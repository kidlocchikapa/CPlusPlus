#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

 srand(time(0));
int daysUntilExpilation = rand()%12;

cout << "The random number is: " << daysUntilExpilation<< endl;
if(daysUntilExpilation >= 10){
    cout << "Your Subscription will expire soon. Renew now!" << endl;
}else if (daysUntilExpilation <= 5){
    cout << "Your subscription expires in "<< daysUntilExpilation <<"days" <<endl;
    cout <<"Renew now and save 10%!" <<endl;
}else if(daysUntilExpilation == 1){
    cout << "Your subscription expires within a day!"<< endl;
    cout << "Renew now and save 20%"<<endl;
}else if(daysUntilExpilation == 0){
    cout <<"Your subscription has expired."<<endl;
}else{
    cout << "you have an active subscription. "<<endl;
}

    return 0;
}
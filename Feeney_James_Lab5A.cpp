#include<iostream>
using namespace std;

int main(){
    int integer1;


    cout << "Please input an integer between 25 and 50 (inclusive of 25 and 50): \n";
    cin >> integer1;

    while(integer1 < 25 || integer1 >50){
        cout << "This is an invalid input please try again\n";

        cout << "Please input an integer between 25 and 50 (inclusive of 25 and 50): \n";
        cin >> integer1;
    }

    cout << "This is a great number!\n";








    return 0;
}
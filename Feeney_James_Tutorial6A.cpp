//Demo: Function Terminology, Void Functions, Function Prototypes

#include <iostream>
using namespace std;

//function prototypes
void displayHello();
void displayGoodbye();


int main(){

    int num = 10;

    for (int i = 1; i <= num; i++){
        cout << i << ":  ";
        displayHello();
    }

        system("pause");




    return 0;
}

void displayHello(){

    cout << "Hello \n";
    displayGoodbye();
}

void displayGoodbye(){

    cout << "Goodbye \n";
}
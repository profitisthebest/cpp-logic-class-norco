#include <iostream>
#include "Person.h"
using namespace std;

int main(){
    Person RBG;
    Person Ada;

    RBG.name = "Ruth";
    RBG.age = 87;
    RBG.height = 61;
    RBG.eyeColor = "blue";

    Ada.name = "Ada";
    Ada.age = 87;
    RBG.height = 61;
    Ada.eyeColor = "brown";

    cout << "Name: " << RBG.name << endl;
    cout << "Age: " << RBG.age << endl;
    cout << "Height: " << RBG.height << endl;
    cout << "Eye Color: " << RBG.eyeColor << endl << endl;

    cout << "Name: " << Ada.name << endl;
    cout << "Age: " << Ada.age << endl;
    cout << "Height: " << Ada.height << endl;
    cout << "Eye Color: " << Ada.eyeColor << endl;

    system("pause");
    return 0;
}

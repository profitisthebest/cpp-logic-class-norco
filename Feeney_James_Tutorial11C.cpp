#include <iostream>
#include "Person.h"
using namespace std;


void getStudent(Person x[], int size);
void displayResults(Person y[], int size);

int main(){
    const int SIZE = 3;
    Person CIS5[SIZE];

    //fill the array
    getStudent(CIS5, SIZE);



    //display array
    displayResults(CIS5, SIZE);

    system("pause");
    return 0;
}

void getStudent(Person x[], int size){
    for(int i=0;i<3;i++){
        cout << "Student Number " << i+1 << endl;
        cout << "Name: ";
        cin >> x[i].name;
        cout << "Age: ";
        cin >> x[i].age;
        cout << "Height: ";
        cin >> x[i].height;
        cout << "Eye Color: ";
        cin >> x[i].eyeColor;
        cout << endl;
    }
}
void displayResults(Person y[], int size){

    for(int i=0;i<size;i++){
        cout << "Student #" << i+1 << y[i].name << ", age = " << y[i].age << "  your height = " << y[i].height << ", your eye color is " << y[i].eyeColor << endl << endl;
    }

}
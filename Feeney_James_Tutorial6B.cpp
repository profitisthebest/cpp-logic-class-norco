//Demo: Value Parameters and Value Returning Functions

#include <iostream>
using namespace std;


//function prototypes go here
void displayValue(int x);
int calcSum(int num1, int num2, int num3);

int main(){

    int value1, value2, value3, sum;
    value1 = 16;
    value2 = 36;
    value3 = 66;

    displayValue(value1);
    displayValue(value2);
    displayValue(value3);
    displayValue(666);
    displayValue(677);

    cout << "This is main \n";

    sum = calcSum(value1, value2 ,value3);

    cout << "Back in main \n";
    cout << "Sum = " << sum << endl << endl;


    system("pause");
    return 0; 
}

void displayValue(int x){
    cout << "The value x in displayValue function = " << x << endl;
}

int calcSum(int num1, int num2, int num3){
    int total; //local variable, scope = where it is visible
    total = num1 + num2 + num3;
    cout << " in calcSum fucntion " << endl;
    return total;
}
// Chapter 2B Demo, Arithmetic Operators

#include <iostream>
using namespace std;

int main(){

    int num1, num2, total;

    num1 = 10;
    num2 = 3;

    total = num1 + num2;

    cout << "Total = " << total << endl;

    total = num1 - num2;
    cout << "Total = " << total << endl;

    total = num1 * num2;
    cout << "Total = " << total << endl;

    total = num1 / num2;
    cout << "Total = " << total << endl;

    total = num1 % num2;
    cout << "Total = " << total << endl;

    // increment operator, decrement operator, C++
    num1++;
    num1++;
    num1++;

    cout << "num1 = " << num1;

    num1--;
    num1--;
    num1--;

    cout << "num1 = " << num1 << endl;

    
    return 0;
}

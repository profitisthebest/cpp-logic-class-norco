//demonstration of formatting output

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

float num1 = 222.333,
    num2 = 333.444,
    num3 = 4444.55,
    num4 = 88.7777,
    num5 = 5;


    cout << showpoint << fixed << setprecision(2);

    cout << setfill(' ') << setw(15) << "Number 1 = " << setfill('.') << num1 << endl; 
    cout << setfill(' ') << setw(15) << "Number 2 = " << setfill('.') << num2 << endl; 
    cout << setfill(' ') << setw(15) << "Number 3 = " << setfill('.') << num3 << endl; 
    cout << setfill(' ') << setw(15) << "Number 4 = " << setfill('.') << num4 << endl; 
    cout << setfill(' ') << setw(15) << "Number 5 = " << setfill('.') << num5 << endl;
    return 0;
}

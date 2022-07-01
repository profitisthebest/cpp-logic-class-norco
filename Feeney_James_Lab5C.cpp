#include<iostream>
using namespace std;

int main(){

    cout << "welcome\n";
    double sales, totalsales =0;
    
    for(int i =0; i <4; i++){

        cout << "below input the sales for division " << i+1 << endl;
        cin >> sales;
        totalsales += sales;

    }
    cout << "Total annual sales for the ABC company is: $" << totalsales << endl;

    return 0;
}
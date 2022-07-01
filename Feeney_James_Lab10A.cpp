#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    const int NUM_DIVS = 3;
    const int NUM_QTRS = 4;
    double sales[NUM_DIVS][NUM_QTRS];
    double divSales[NUM_DIVS];  
    double totalSales = 0;

    for(int i=0; i<NUM_DIVS; i++){
        for(int j=0; j<NUM_QTRS; j++){
            cout << "Division " << i+1 << ", Quarter " << j+1 << ": $";
            cin >> sales[i][j];
            totalSales += sales[i][j];
            divSales[i]+= sales[i][j];
        }
        cout << endl;
    }

    cout << "Division 1 sales for the company are: $" << divSales[0] << endl;
    cout << "Division 2 sales for the company are: $" << divSales[1] << endl;
    cout << "Division 3 sales for the company are: $" << divSales[2] << endl;
    cout << "The total sales for the company are: $" << totalSales << endl;
    return 0;
}
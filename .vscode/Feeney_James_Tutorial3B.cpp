// Demonstation of Mathematical Expression
// cmath library and Typecasting

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    double test1, test2, test3, avg;

    double books, months;
    int remainder;
    float booksPerMonth;

    test1 = 92;
    test2 = 95;
    test3 = 91;
    avg = (test1 + test2 + test3) / 3.0;

    cout << showpoint << fixed << setprecision(2);
    cout << "Average = " << avg << endl;

    //integer divison and the modulus operator
    // interger division truncates any deicmal component
    books = 5;
    months = 2;
    booksPerMonth = static_cast<double>(books) / months;
    

    cout << "I must read " << booksPerMonth << " books per month.\n";
    cout << "Remainder = " << remainder << endl; 




    return 0;
}
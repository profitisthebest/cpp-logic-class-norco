#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main(){

    //variable declaration
    string fullName, typeCookie;
    int studentID, sizeCookie;
    const double PI = 3.14159;
    

    //input section

    cout << "Please enter your full name: " << endl;
    getline(cin, fullName);

    cout << "Please enter your student ID: \n";
    cin >> studentID;

    cin.ignore(); 

    cout << "Please enter the type of cookie you would like(the 3 options are chocolate chip, oatmeal raisin, or snickerdoodle): \n";
    getline(cin, typeCookie);


    cout << "Please enter the diameter of the cookie in inches(enter the integer only): " << endl;
    cin >> sizeCookie;

    double area = PI * pow((sizeCookie / 2.0), 2);

    //output section
    cout << "\n\n\n\n\n\n\n" << fullName << endl << studentID << endl << typeCookie << endl << sizeCookie << endl;
    cout << fixed << setprecision(2) << area << endl;
    return 0;
}
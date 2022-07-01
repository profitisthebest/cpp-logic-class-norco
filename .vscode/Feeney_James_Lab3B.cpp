#include <iostream>
#include <cmath>
#include <string> 
#include <iomanip>

using namespace std;

int main(){
    //variable declaration
    string studentName, dayOfMeet, timeOfMeet;
    float side1, side2, hypotenuse;

    //input section
    cout << "What is your name?" << endl;
    getline(cin, studentName);
    cout << "What day does the class meet?" << endl;
    getline(cin, dayOfMeet);
    cout << "What time does the class meet?" << endl;
    getline(cin, timeOfMeet);
    cout << "Enter values for side1 and side2" << endl;
    cin >> side1 >> side2; 


    //output section
    cout << "\n\n\n\n\n" << "Your name: " << studentName << endl << "Day that the class meets: " << dayOfMeet << endl << "The time of the Meet:" << timeOfMeet << endl;
    cout << fixed << showpoint << setprecision(2) << setw(8) << "Side 1 = " <<  side1 << endl << "Side 2 = " << side2 << endl << "Hypotenuse = " << sqrt((pow(side1, 2) + pow(side2, 2))) << endl;





    return 0;
}
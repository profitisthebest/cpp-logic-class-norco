//Chapter 2 Demo

#include <iostream> //preprocessor directive
#include <string>
using namespace std; //defines the namespace for cout

int main(){ // entry point, start here
    //variable definitions, reserves space in memory
    int numStudents;
    int numTests;
    int numProjects; 

    string firstName;
    string lastName;

    float test1, test2, test3;

    bool runAgain = true; //do not use a string literal
    char answer = 'y'; //y for yes or n for no

    //assign values
    numStudents = 35; //35 is a numeric literal
    numTests = 4;
    numProjects = 10;

    firstName = "Ruth Bader";
    lastName = "Ginsburg";
    test1 = 95;
    test2 = 98;
    test3 = 92;

    //output to default output device
    cout << "The numbers of students in the class = " << numStudents << endl;
    cout << "Student Name = " << firstName << " " << lastName << endl;
    cout << "Test 1 = " << test1 << "  Test 2 = " << test2  << "  Test 3 = " << test3 << endl;
    cout << "Answer = " << answer << "    The value of runAgain = " << runAgain << endl << endl;

    return 0; // returns code zero to operating system
}
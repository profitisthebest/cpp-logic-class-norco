// Demonstration of Decision Sturctures, Branching
//if, else, and else if 

#include <iostream>
using namespace std;

int main(){

    //Constants for grade thresholds
    const int A_SCORE = 90,
        B_SCORE = 80,
        C_SCORE = 70,
        D_SCORE = 60;

    int testScore; //to hold the numeric test score
    char grade;

    //Get the numeric test score
    cout << "ENter your numeric test score and I will "
        << "tell you the letter grade you earned: ";
    cin >> testScore; //pause execution and wait for input

    //determine the letter grade
    if (testScore >= A_SCORE){
        grade = 'A';
        cout << "Exellent! You earned an " << grade << '.' << endl;
    }else if (testScore >= B_SCORE){
        grade = 'B';
        cout << "Good Job! You earned an " << grade << '.' << endl;
    }else if (testScore >= C_SCORE){
        grade = 'C';
        cout << "Nice Work! You earned an " << grade << '.' << endl;
    }else if (testScore >= 0){
        grade = 'F';
        cout << "You failed the course. You earned a " << grade << '.' << endl;
    }else{
        cout << "Invalid Input. \n";
    }

    if (testScore == 100){
        cout << "Congratulations! You earned a perfect score.\n";
    }


    if (testScore >= C_SCORE){
        cout << "YOu passed the class. \n";
    }else if (testScore >= 0){
        cout << "You failed the class. \n";
    }
    return 0;
}
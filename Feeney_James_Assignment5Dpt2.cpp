#include <iostream>
#include <string>
using namespace std;

int main(){
    char again;
    do{
        cout << "Welcome user! How many students are in the class, (choose between 1 and 35)." << endl;
        int students, tests, testScore, testSum = 0;
        int lowScore = -1, average;
        cin >> students;
        if(!(1<=students<=35)){
            cout << "ERROR: wasn't a number between 1 and 35(inclusive). Please input again.";
            cin >> students;
        }
        string fullName;
        char letterGrade;

        for (int i = 0; i < students; i++){
            cout << "enter full name:" << endl;
            getline(cin, fullName);
            getline(cin, fullName);
            cout << "Enter the amount of tests you would like to input(between 2 and 5 inclusive).\n";
            cin >> tests;
            if(!(2<=tests<=5)){
            cout << "ERROR: wasn't a number between 2 and 5(inclusive). Please input again.";
            cin >> tests;
            }
            for(int j = 0; j<tests; j++){
                cout << "Enter the test scores between 0 and 100(inclusive):" << endl;
                cin >> testScore;
                if(!(0<=testScore<=100)){
                cout << "ERROR: wasn't a number between 0 and 100(inclusive). Please input again.";
                cin >> testScore;
                }
                if(lowScore == -1){
                    lowScore = testScore;
                }else if(testScore < lowScore){
                    testScore = lowScore;
                }
                testSum+= testScore;
            }
            average = float((testSum - lowScore)/(tests-1));

            if (average >=90){
                letterGrade = 'A';
            } else if(average >= 80){
                letterGrade = 'B';
            } else if (average >= 70){
                letterGrade = 'C';
            } else if (average >=60){
                letterGrade ='D';
            } else{
                letterGrade ='F';
            }
            cout << "student name:" << fullName << "  gradeaverage: " << average << " letter grade: " << letterGrade << endl;
            testSum = 0;
            lowScore = -1;
        }


        cout << "Would you like to run again? type y for yes or n for no" << endl;
        cin >> again;
        again = toupper(again);
        if (again!= 'Y' || again!='N'){
            cout << "Error: type y or n in capital letters" << endl;
            cin >> again;
        }


    }while(again == 'Y');



    return 0;
}
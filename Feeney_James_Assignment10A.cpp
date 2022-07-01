#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int NUM_OF_STUDENTS = 3, NUM_OF_TESTS = 5;


void getInput(string name[], int test[NUM_OF_STUDENTS][NUM_OF_TESTS]){
    for(int i = 0; i < NUM_OF_STUDENTS; i++){
    //get student name
        cout << "Input the student name and press enter \n";
        getline(cin, name[i]);
        
        for(int j = 0; j < NUM_OF_TESTS; j++){
            //get student test score
            cout << "Input the score for test number " << j+1 << endl;
            cin >> test[i][j]; 
            
        }
        cin.ignore();
    }
}




float calcAvg(int test[NUM_OF_STUDENTS][NUM_OF_TESTS], int whichStudent){
    int total1 = 0;
    int hindex1 = 0;
    int lindex1 = 0;
    float avg1;

    //find the high and low
    for(int j = 0; j < NUM_OF_TESTS; j++){
        total1 += test[whichStudent][j];
        if(test[whichStudent][hindex1] < test[whichStudent][j])
            hindex1 = j;
        if(test[whichStudent][lindex1] > test[whichStudent][j])
            lindex1 = j;
    }

    //drop high and low 
    total1 -= (test[whichStudent][hindex1] + test[whichStudent][lindex1]);

    //calculate avg
    avg1 = (float)total1/(NUM_OF_TESTS - 2);
    return avg1;
    
}


char assignGrade(int test[NUM_OF_STUDENTS][NUM_OF_TESTS], float avg){

    char grade;

    if(avg >= 90) grade = 'A';
    else if(avg >= 80) grade = 'B';
    else if(avg >= 70) grade = 'C';
    else if(avg >= 60) grade = 'D';
    else if(avg <=59 || avg >= 0) grade = 'F';

    return grade;
}

void displayResults(string name[], int test[NUM_OF_STUDENTS][NUM_OF_TESTS], float avg1, float avg2, float avg3, char grade1, char grade2, char grade3){
    
    cout << setw(5) << "Student's Name: " << setw(20) << "Test Scores: " << setw(20) << "Average Test Score:" << setw(20) << "Grade: " << endl;

    cout << setw(5) << name[0] << setw(20) << test[0][0] << ", " << test[0][1] << ", " << test[0][2] << ", " << test[0][3] << 
    ", " << test[0][4] << setw(20) << avg1 << setw(20) << grade1 << endl;

    cout << setw(5) << name[1] << setw(20) << test[1][0] << ", " << test[1][1] << ", " << test[1][2] << ", " << test[1][3] << 
    ", " << test[1][4] << setw(20) << avg2 << setw(20) << grade2 << endl;

    cout << setw(5) << name[2] << setw(20) << test[2][0] << ", " << test[2][1] << ", " << test[2][2] << ", " << test[2][3] << 
    ", " << test[2][4] << setw(20) << avg3 << setw(20) << grade3 << endl;
    

}


int main(){

    int avg1, avg2, avg3;
    string name[NUM_OF_STUDENTS]; 
    int test[NUM_OF_STUDENTS][NUM_OF_TESTS];
    char grade[NUM_OF_STUDENTS];
    float avg[NUM_OF_STUDENTS];
    
    getInput(name, test);
    avg1 = calcAvg(test, 0);
    avg2 = calcAvg(test, 1);
    avg3 = calcAvg(test, 2);
    char grade1 = assignGrade(test, avg1);
    char grade2 = assignGrade(test, avg2);
    char grade3 = assignGrade(test, avg3);
    displayResults(name, test, avg1, avg2, avg3, grade1, grade2, grade3);

        
    return 0;
}
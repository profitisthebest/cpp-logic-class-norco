#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int NUM_OF_STUDENTS = 4, NUM_OF_TESTS = 5;


struct Student{
    string name;
    int id;
    int scores[NUM_OF_TESTS];
    float average;
    char grade;
};


void getInput(Student x[]){
    
    for(int i=0; i<NUM_OF_STUDENTS; i++){
        cout << "Student Name: ";
        cin >> x[i].name;
        cout << "Student ID: ";
        cin >> x[i].id;
        for(int j=0; j<NUM_OF_TESTS; j++){
            cout << "Student Test Number " << j+1 << ": ";
            cin >> x[i].scores[j];
        }
    }
}




float calcAvg(Student x[], int whichStudent){
    int total1 = 0;
    int hindex1 = 0;
    int lindex1 = 0;
    float avg1;

    //find the high and low
    for(int j = 0; j < NUM_OF_TESTS; j++){
        total1 += x[whichStudent].scores[j];
        if(x[whichStudent].scores[hindex1] < x[whichStudent].scores[j])
            hindex1 = j;
        if(x[whichStudent].scores[lindex1] > x[whichStudent].scores[j])
            lindex1 = j;
    }

    //drop high and low 
    total1 -= (x[whichStudent].scores[hindex1] + x[whichStudent].scores[lindex1]);

    //calculate avg
    avg1 = (float)total1/(NUM_OF_TESTS - 2);
    return avg1;
    
}


char assignGrade(Student x[], int whichStudent){

    char grade;

    if(x[whichStudent].average >= 90) grade = 'A';
    else if(x[whichStudent].average >= 80) grade = 'B';
    else if(x[whichStudent].average >= 70) grade = 'C';
    else if(x[whichStudent].average >= 60) grade = 'D';
    else if(x[whichStudent].average <=59 || x[whichStudent].average >= 0) grade = 'F';

    return grade;
}

void displayResults(Student x[]){
    
    float highAverage = 0.00;
    int highAverageIndex;

    cout << setw(5) << "Student's Name: " << setw(20) << "Test Scores: " << setw(20) << "Average Test Score:" << setw(20) << "Grade: " << endl;

    cout << setw(5) << x[0].name << setw(20) << x[0].scores[0] << ", " << x[0].scores[1] << ", " << x[0].scores[2] << ", " << x[0].scores[3] << 
    ", " << x[0].scores[4] << setw(20) << x[0].average << setw(20) << x[0].grade << endl;

    cout << setw(5) << x[1].name << setw(20) << x[1].scores[0] << ", " << x[1].scores[1] << ", " << x[1].scores[2] << ", " << x[1].scores[3] << 
    ", " << x[1].scores[4] << setw(20) << x[1].average << setw(20) << x[1].grade << endl;

    cout << setw(5) << x[2].name << setw(20) << x[2].scores[0] << ", " << x[2].scores[1] << ", " << x[2].scores[2] << ", " << x[2].scores[3] << 
    ", " << x[2].scores[4] << setw(20) << x[2].average << setw(20) << x[2].grade << endl;
    
    cout << setw(5) << x[3].name << setw(20) << x[3].scores[0] << ", " << x[3].scores[1] << ", " << x[3].scores[2] << ", " << x[3].scores[3] << 
    ", " << x[3].scores[4] << setw(20) << x[3].average << setw(20) << x[3].grade << endl << endl << endl;

    cout << "Class Average: " << (x[0].average + x[1].average + x[2].average + x[3].average)/NUM_OF_STUDENTS << endl;

    for(int i = 0; i<NUM_OF_STUDENTS; i++){
        if(x[i].average > highAverage) 
            highAverage = x[i].average;
            highAverageIndex = i;
    }

    cout << "The Student with the Highest Average in the Class is: " << x[highAverageIndex].name << ". ID: " << x[highAverageIndex].id << ". They had an average of "
        << x[highAverageIndex].average << endl;
}


int main(){

    Student gradebook[NUM_OF_STUDENTS];
    cout << showpoint;
    
    //INPUT 
    getInput(gradebook);

    //CALCULATING AVERAGES
    gradebook[0].average = calcAvg(gradebook, 0);
    gradebook[1].average = calcAvg(gradebook, 1);
    gradebook[2].average = calcAvg(gradebook, 2);
    gradebook[3].average = calcAvg(gradebook, 3);

    //ASSIGNING GRADES 
    gradebook[0].grade = assignGrade(gradebook, 0);
    gradebook[1].grade = assignGrade(gradebook, 1);
    gradebook[2].grade = assignGrade(gradebook, 2);
    gradebook[3].grade = assignGrade(gradebook, 3);
    
    //DISPLAY EVERYTHING
    displayResults(gradebook);

        
    return 0;
}
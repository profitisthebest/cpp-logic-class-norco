#include <iostream>
#include <string>
using namespace std;

int main(){

    const int NUM_STUDENTS = 4;
    string name[NUM_STUDENTS]; 
    int test[NUM_STUDENTS];
    char grade[NUM_STUDENTS];
    float avg;
    int total = 0, hiIndex = 0, lowIndex = 0;

    for (int counter = 0; counter < NUM_STUDENTS; counter++){

    //get student name
    cout << "Input the student name and press enter \n";
    getline(cin, name[counter]);
    

    //get student test score
    cout << "Input the score for midterm test \n";
    cin >> test[counter];
    cin.ignore();
    //(accumulate scores) total all scores
    total += test[counter];

    //assign letter grade
    if(test[counter] >= 90) 
        grade[counter] = 'A';
    else if(test[counter] >= 80) 
        grade[counter] = 'B';
    else if(test[counter] >= 70) 
        grade[counter] = 'C';
    else if(test[counter] >= 60) 
        grade[counter] = 'D';
    else if(test[counter] >= 0)
        grade[counter] = 'F';

    //find index of student with highest score
    if(test[hiIndex]< test[counter])
        hiIndex = counter; 

    //find index of student with highest score
    if(test[lowIndex] > test[counter])
        lowIndex = counter;
}

//calculate the class average
avg = static_cast<float>(total)/NUM_STUDENTS;

//display results
for(int counter = 0; counter < NUM_STUDENTS; counter++){
    cout << name[counter] << ", your test score = " << test[counter] << ", your grade = " << grade[counter] << endl;

}
cout << "\n\nThe class average for this test = " << avg << endl << endl;

cout << name[hiIndex] << " has the highest test score: it = " << test[hiIndex] << endl;

cout << name[lowIndex] << " has the lowest test score: it = " << test[lowIndex] << endl;

return 0;
}
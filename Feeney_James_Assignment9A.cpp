#include <iostream>
#include <string>
using namespace std;


void getInput(string name[], int test[], int size){
    for(int i = 0; i < size; i++){
    //get student name
        cout << "Input the student name and press enter \n";
        getline(cin, name[i]);
        

        //get student test score
        cout << "Input the score for midterm test \n";
        cin >> test[i];
        cin.ignore();
    }
}

void assignGrade(int test[], char grade[], int size){

for(int counter = 0; counter < size; counter++)
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

}

float calcAvg(int test[], int total, int size){
    for(int counter = 0; counter < size; counter++){
        //(accumulate scores) total all scores
        total += test[counter];
    }
    return static_cast<float>(total)/size;
}

int findHi(int test[], int size){
    int index = 0;
    for(int counter = 0; counter < size; counter++){
        if(test[index]< test[counter])
        index = counter; 
    }
    return index;
}

int findLow(int test[], int size){
    int index = 0;
    for(int counter = 0; counter < size; counter++){
        if(test[index]> test[counter])
        index = counter; 
    }
    return index;
}


void displayResults(string name[], int test[], char grade[], int size, float avg, int lowIndex, int hiIndex){
    //display results
    for(int counter = 0; counter < size; counter++){
        cout << name[counter] << ", your test score = " << test[counter] << ", your grade = " << grade[counter] << endl;

    }
    cout << "\n\nThe class average for this test = " << avg << endl << endl;

    cout << name[hiIndex] << " has the highest test score: it = " << test[hiIndex] << endl;

    cout << name[lowIndex] << " has the lowest test score: it = " << test[lowIndex] << endl;

}


int main(){

    const int NUM_STUDENTS = 4;
    string name[NUM_STUDENTS]; 
    int test[NUM_STUDENTS];
    char grade[NUM_STUDENTS];
    float avg;
    int total = 0;
    int hiIndex = 0, lowIndex = 0;

        //get input
        getInput(name, test, NUM_STUDENTS);

        //calculate grades
        assignGrade(test, grade, NUM_STUDENTS);

        //find index of student with highest score
        hiIndex = findHi(test, NUM_STUDENTS);

        //find index of student with highest score
        lowIndex = findLow(test, NUM_STUDENTS);


//calculate the class average
avg = calcAvg(test, total, NUM_STUDENTS);

//display results
displayResults(name, test, grade, NUM_STUDENTS, avg, lowIndex, hiIndex);
return 0;
}
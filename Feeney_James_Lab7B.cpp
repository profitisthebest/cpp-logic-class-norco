#include <iostream>
#include <string>
using namespace std;


//function prototypes
void displayResults(string name, float avg, char y); 
int getTestScore();
float calcAvg(int t1, int t2, int t3);
bool isValid(int num, int min, int max);
string getName();
char letterGrade(float x);
void getStudentInfo(string &nname, int &ttest1, int &ttest2, int &ttest3);

int main(){

    string fullName;
    int test1, test2, test3;
    float average;
    int yesorno = 1;


    while(yesorno == 1){
        //get student full name and test scores

        getStudentInfo(fullName, test1, test2, test3);

        //calculate average
        average = calcAvg(test1, test2, test3);

        //assign a latter grade
        char boo = letterGrade(average);

        //display heading, name and average
        displayResults(fullName, average, boo); //function call for a void function

        cout << "Do you want to run the program again for another student? Enter 1 for yes and any other integer for no to exit" << endl;
        cin >> yesorno;


    }
    

    


    system("pause");
    return 0;
}


void getStudentInfo(string &nname, int &ttest1, int &ttest2, int &ttest3){

nname = getName();
ttest1 = getTestScore();
ttest2 = getTestScore();
ttest3 = getTestScore();

}

void displayResults(string name, float avg, char y){

    cout << "--------------------------------------------------\n";
    cout << "Norco College \n";
    cout << "CIS-5: Intro to Programming with C++ \n";
    cout << "Students Averages \n";
    cout << "--------------------------------------------------\n";

    cout << name << ": " << avg << "\n" << name << " grade: " <<  y << endl;
}

int getTestScore(){

    int score;
    int min = 0, max = 100;
    cout << "Enter a test score:     ";
    cin >> score;
    while(!isValid(score, min, max)){
        cout << "Try again. Enter a test score: ";
        cin >> score;
    }


    return score;
}

//calcAvg totals scores and calculates the average
float calcAvg(int t1, int t2, int t3){

    float avg;
    avg = (t1 + t2 + t3)/3.0;

    return avg;
}

//isValid test for valid input and returns true or false
bool isValid(int num, int min, int max){
    if(num<min || num > max){
        return false;
    }else{
        return true;
    }
}

string getName(){

    string fullName;
    cout << "Student Name: ";
    getline(cin, fullName);

    return fullName;
}

char letterGrade(float x){
    char grade;


    if (x>= 90){
        grade = 'A';
    }else if(x >= 80){
        grade = 'B';
    }else if(x >= 70){
        grade = 'C';
    }else if(x >= 60){
        grade = 'D';
    }else{
        grade = 'F';
    }


    return grade;
}

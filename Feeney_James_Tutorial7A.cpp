#include <iostream>
#include <string>
using namespace std;



string getName();
int getScore();
void getStudentInfo(string & name, int t1, int & t2, int & t3);

int main(){

    string studentName;
    int test1, test2, test3;

    test1 = 88;

    cout << "address of test1 " << &test1 << endl;
    cout << "address of test2 " << &test2 << endl;

    getStudentInfo(studentName, test1, test2, test3);

    cout << studentName << ": " << test1 << ", " << test2 << ", " << test3 << endl;

    system("pause");
    return 0;
}

string getName(){
    string name;

    cout << "Input your name: ";
    getline(cin, name);

    return name;
}

int getScore(){

    int score;

    cout << "Input the test score : " << endl;
    cin >> score;

    return score;



}

void getStudentInfo(string & name, int t1, int & t2, int & t3){


    cout << "Input your name: ";
    getline(cin, name);

    cout << "address of t1 " << &t1 << endl;
    cout << "address of t1 " << &t2 << endl;

    cout << "Input the test score : " << endl;
    cin >> t1;

    cout << "Input the test score : " << endl;
    cin >> t2;

    cout << "Input the test score : " << endl;
    cin >> t3;


}
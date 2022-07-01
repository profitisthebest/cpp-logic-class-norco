#include <iostream>
using namespace std;

int main(){

    bool unionMember;
    char answer;
    int testAvg = 65;
    int attendance = 65;
    int score;

    //accidentally deleteded all of the code that was commented


    cout << "Input a score between 0 and 100:  ";
    cin >> score;

    if (score >100 || score < 0)
        cout << "This is and INVALID SCORE \n";
    else
        cout << "This is a valid score \n";

    return 0;
}
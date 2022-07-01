#include <iostream>
#include <cctype>
using namespace std;

int main(){
    int score1, score2, score3;
    double average;
    char again;

    do{
        cout << "enter 3 scores and I will average them: \n";
        cin >> score1 >> score2 >> score3;

        average = (score1 +score2 + score3)/3.0;
        cout << "the average is " << average << ".\n";

        cout << "DO you want to average another set?(Y/N) ";
        cin >> again;
    }while ( toupper(again) == 'Y');
    return 0;
}
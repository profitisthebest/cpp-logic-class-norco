//Demo CHapter 5: WHile loops examples
//input validation
//running total
//sentinel value
#include <iostream>
using namespace std;
int main(){
    int score, total = 0;
    cout << "Enter test scores. Enter -999 when finished." << endl;
    cin >> score;

    while(score!=-999){
        total += score;
        cout << "Enter a test score : " << endl;
        cin >> score;
    }
    cout << "Total = " << total << endl;
    return 0;
}
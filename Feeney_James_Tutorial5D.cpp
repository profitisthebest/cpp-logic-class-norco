#include <iostream>
using namespace std;

int main(){
    int count;

    const int MIN_NUMBER = 1, MAX_NUMBER =5;

    for (count = 1; count <=15; count++){
        cout << count << ". Hello \n";
    }
    cout << "Count = " << count << endl;

    cout << "\n\nNUmber     Number Squared\n";
    cout << "------------------------------\n";
    
    for(int num = MIN_NUMBER; num <= MAX_NUMBER; num++){
        cout << num << "\t\t" << num * num << endl;
    }
    return 0;
}
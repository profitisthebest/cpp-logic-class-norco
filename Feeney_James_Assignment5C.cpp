#include <iostream>
using namespace std;

int main() {

    const int MAX = 10;



    for (int i=1; i<=MAX; i++) {
        cout << "     " << i;
    }  
    cout << endl;
    for (int i=1; i<=MAX; i++) {
        cout << "     ";
        for (int j=0; j<MAX; j++) {
            cout << "______";
        }  
        cout << endl;
        cout << i << "   |";
        for (int j=1; j<=MAX; j++) {
            if (i*j>=100)
                cout << "  " << i*j << "|";
            else if (i*j>=MAX)
                cout << "   " << i*j << "|";
            else
                cout << "    " << i*j << "|";
        }
        cout << endl;
    } 
    cout << "     ";
    for (int i=0; i<MAX; i++) {
        cout << "______";
    }  
    return 0;
}
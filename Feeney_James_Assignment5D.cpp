#include <iostream> 
using namespace std;

int main(){
    const int MAX = 10;
    for (int i = 1; i <= MAX - i+1; i++){
        for(int j = 1; j<= MAX - j+1; j++){
            cout << "*";
        }
        cout << endl;
    }


    return 0;
}
#include <iostream>
using namespace std;

int main(){

    int numberList[5];
    int numberGrid[3][2];

    //1D array input
    for(int i=0; i <5; i++){
        cout << "Enter a number 1-9: \n";
        cin >> numberList[i];
    }

    //2D array input
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cout << "Enter a number 10-99: \n";
            cin >> numberGrid[i][j];
        }
    }




    cout << "1D array \n";
    for(int i =0; i<5; i++){
        cout << numberList[i] << ", ";

    }
    cout << endl;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            cout << numberGrid[i][j];
        }
        cout << endl;
    }
    cout << endl;






    system("pause");
    return 0;
}
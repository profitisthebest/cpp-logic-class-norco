#include <iostream>
using namespace std;

int main(){

    int num1, num2, num3, highestNumber, middleNumber, lowestNumber;
    cout << "Please input 3 integers between 1 and 500" << endl;
    cin >> num1 >> num2 >> num3;


    //highest number test
    if(num1 > num2 && num1 > num3){
        highestNumber = num1;
    }else if (num2 > num1 && num2 > num3){
        highestNumber = num2;
    }else if(num3 > num1 && num3 > num2){
        highestNumber = num3;
    }


    //lowest number test
    if(num1 < num2 && num1 < num3){
        lowestNumber = num1;
    }else if (num2 < num1 && num2 < num3){
        lowestNumber = num2;
    }else if(num3 < num1 && num3 < num2){
        lowestNumber = num3;
    }

    //middle number test
    if(num1 != highestNumber && num1 != lowestNumber){
        middleNumber = num1;
    }else if (num2 != highestNumber && num2 != lowestNumber){
        middleNumber = num2;
    }else if(num3 != highestNumber && num3 != lowestNumber){
        middleNumber = num3;
    }

    cout << lowestNumber << "    " << middleNumber << "        " << highestNumber;

    return 0;
}
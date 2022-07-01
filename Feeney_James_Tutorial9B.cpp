//passing arrays as parameters to functions

#include <iostream>
#include <string>
#include <ctime>

using namespace std;


void printList(int numList[], int size);
int countIt(int list[], int size, int numToCount);
void resetList(int newList[], int size);
void fillList(int newList[], int size);

int main(){

    srand(time(0));
    const int SIZE = 10;
    int numArray[SIZE];
    int count;

    cout << numArray << endl; //print the beginning memory address of array



    //fill the array
    fillList(numArray, SIZE);


    printList(numArray, SIZE);

    count = countIt(numArray, SIZE, 3);
    cout << "The number 3 occurs " << count << " times in the list." << endl;

    resetList(numArray, SIZE);
    printList(numArray, SIZE);


    return 0;
}

void printList(int numList[], int size){

    cout << numList << endl;

    for(int i = 0; i < size; i++){
        cout << numList[i] << endl; 

    }
}

int countIt(int list[], int size, int numToCount){
    cout << list << endl;
    int count = 0;
    for(int i = 0; i < size; i++){
        if(list[i] == numToCount) count++;

    }
    return count;
}

void resetList(int newList[], int size){
    for(int i = 0; i < size; i++){
        newList[i] = 0;
    }


}

void fillList(int newList[], int size){

    for (int i = 0; i < size; i++){
        newList[i] = rand() % 3 + 1;
    }
}
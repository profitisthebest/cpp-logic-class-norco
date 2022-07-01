#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;


const int NUM_ROWS = 4, NUM_COLS = 3;

void fillNameArray(string name[NUM_ROWS][NUM_COLS]);
void displaySeatingChat(string name[NUM_ROWS][NUM_COLS]);

int main(){

    
    string name[NUM_ROWS][NUM_COLS];

    fillNameArray(name);

    displaySeatingChat(name);




    system("pause");
    return 0;
}

void fillNameArray(string name[NUM_ROWS][NUM_COLS]){
    fstream nameFile;
    nameFile.open("students.txt");


    //fill the name array
    for(int i = 0; i< NUM_ROWS; i++){
        for(int j = 0; j<NUM_COLS; j++){
            nameFile >> name[i][j];
        }
    }
    nameFile.close();
}

void displaySeatingChat(string name[NUM_ROWS][NUM_COLS]){
    //display the seating chart
    for(int i = 0; i<NUM_ROWS; i++){
        for(int j = 0; j<NUM_COLS; j++){
            cout << setw(10) << name[i][j];
        }
        cout << endl;
    }
}
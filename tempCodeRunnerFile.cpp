#include <iostream>
#include <cstring>
using namespace std;
// Created by Enoch and James
bool calculateWinner(char board[9]) {
    const int winning[8][3] = {
    {0, 1, 2},
    {3, 4, 5},
    {6, 7, 8},
    {0, 3, 6},
    {1, 4, 7},
    {2, 5, 8},
    {0, 4, 8},
    {2, 4, 6},
    };
    for (int i=0; i<8; i++) {
    // a b c
    int a=winning[i][0], b=winning[i][1], c=winning[i][2];

    if (board[a]!='-' && board[a]==board[b] && board[a] == board[c]) {
    cout << "Player " << board[a] << " has won!" << endl;
    return true;
    }
    }

    // if every spot is filled by 'X' or 'O', then cout there has been a tie and return true
    // for or while loop
    for(int p = 0; p < 9; p++) {
    if (board[p]!='X'&&board[p]!='O') break;
    if (p == 8){
    cout << "There has been a tie." << endl;
    return true;
        }
    }
    return false;
}


// created by James
void printBoard(char board[9]) {
    // iterate through the board
    // print each element, if not x or o (meaning 0), then print a space
    // every 3 elements print a new line
    for(int i=0; i < 9; i++){
    if ((i+1)%3==1){
    cout << endl;
    }
    cout << board[i] << " ";
    }
    cout << endl;
}

// created by Enoch
int main() {
    char board[9];
    memset(board,'-',sizeof(board));
    // x symbolized by 1 o symbolzied by 2
    // start with x
    bool xTurn=true;
    while (!calculateWinner(board)) {
        int row,col;
        if (xTurn) cout << "Player X: " << endl;
        else cout << "Player O: " << endl;
        cout << "Row (indexed 1-3): ";
        cin >> row;
        cout << "Col (indexed 1-3): ";
        cin >> col;
        if (xTurn) board[(row-1)*3+col-1]='X'; // compensate for 1 index
        else board[(row-1)*3+col-1]='O';
        cout << "Current Board: " << endl;
        printBoard(board);
        xTurn=!xTurn;
    }
    return 0;
}

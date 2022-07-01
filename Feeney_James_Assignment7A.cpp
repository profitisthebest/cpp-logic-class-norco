#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
using namespace std;




int input();
void displayResults(int x, int y, int z);
void determineWinner(int &comp, int &user, int &t, int &w, int &x);
int computerChoice();



int main() {
    int ties = 0, wins = 0;
    int botWins = 0;
    bool tryAgain=true;
    while(tryAgain) {
        srand(time(0));
        int comp= computerChoice();
        int userChoice=input();
        determineWinner(comp, userChoice, ties, wins, botWins);
        string playAgain;
        cout << "Would you like to play again? type yes if you would like to play again.";
        cin >> playAgain;
        if (playAgain=="no") tryAgain=false;
    }
    displayResults(ties, wins, botWins);
    return 0;
}




int computerChoice(){
    int wow =(rand()%3)+1;

    return wow;
}
void displayResults(int x, int y, int z){


cout << "Ties: " << x << endl << "Wins: " << y << endl <<  "Bot Wins:" << z << endl;
}
int input() {
    cout << "Choice of rock, paper, or scissors: ";
    string choice; cin >> choice;
    if (choice=="rock") return 1;
    else if (choice=="paper") return 2;
    else return 3;
}
//x is bot wins 
void determineWinner(int &comp, int &user, int &t, int &w, int &x) {
    if (comp==user) { 
        if (comp==1) cout << "You both chose rock. ";
        else if(comp==2) cout << "You both chose paper. ";
        else cout << "You both chose scissors. ";
        cout << "This game is a tie.";
        t++; 
    }
    if (comp==1 && user==3) {
        cout << "Rock smashes scissors. You lose.";
        x++;
    } else if (comp==3 && user==1) {
        cout << "Rock smashes scissors. You win";
        w++;
    } else if (comp==3 && user==2) {
        cout << "Scissors wins against paper. You lose.";
        x++;
    } else if (comp==2 && user==3) {
        cout << "Scissors wins against paper. You win.";
        w++;
    } else if (comp==2 && user==1) {
        cout << "Paper wins against rock. You lose.";
        x++;
    } else if (comp==1 && user==2) {
        cout << "Paper wins against rock. You win.";
        w++;
    }
    cout << endl;
    return;
}

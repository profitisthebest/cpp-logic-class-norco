#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

char getDecision();
char getGuess();
char flipCoin();
void winOrLose(char guess, char coin, float & bank);

int main(){
    float money = 15.00;
    char decision, guess, coin;

    // display the 3 lines of messages to user (or create another function for these cout statements)
    cout << "Welcome to The Coin Flip Game!" << endl;
    cout << "Your bank balance starts at $15" << endl;
    cout << "It costs $1.00 to play" << endl << "If you guess correctly, you keep your &1 bet and earn $1.\n If you lose, your bet is subtracted from your balance\n";
    // call get decision
    decision = getDecision();



    // use a while loop and continue while the decision is y and the bank balance is >0
        // the body of the while loop consist of 4 function calls....
            // call getGuess
            // call flipCoin
            // call winOrLose
        //call getDecision

        //after the while loop, display the thank you message with the bank balance



        while(decision = 'y'){

            getGuess();
            flipCoin();
            winOrLose(guess, coin, money);
            getDecision();
        }
       

        return 0;
}


char getDecision(){
    char x;
    // the purpose of this function is to ask if the player wishes to play again// and return a y or n
    cout << "Would you like to play agian? (y/n)" << endl;
    if (x = 'y') return 'y';
    else return 'n';

}

char getGuess(){
    // the purpose of getGuess is to prompt the user to input h or t
    // and return the result
    char y;

    cout << "Guess Heads or Tails (h/t). " << endl;
    cin >> y;
    return y;



}

char flipCoin(){
    // the purpose of flipCoin is to generate a random number 1 or 2
    // if it's 1, display "the coin landed on heads" and return h
    // if its a 2, display "the coin landed on tails" and return t

    srand(time(0));
    int correct = 1 + (rand()%2); 
    if (correct == 1){
        cout << "the coin landed on heads!" << endl;
        return 'h';
    }else if(correct == 2){
        cout << "the coin landed on tails!" << endl;
        return 't';
    }

}

void winOrLose(char guess, char coin, float & bank){

    float bet = 1.00;


    if(guess == coin){
        cout << "You guessed correctly! You win" << bet*2 << " !\n";
        bank+= bet*2;
    }else if(guess != coin){
        cout << "You guessed incorrectly! You lose " << bet*2 << " !\n";
        bank = bank - bet*2;
    }

    cout << "Your bank balance: " << bank << endl;

}















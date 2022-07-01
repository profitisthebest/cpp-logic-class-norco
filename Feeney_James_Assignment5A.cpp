#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <ctime>
#include <iomanip>
using namespace std;

int main(){
    srand(time(0));
    int guess, count, solution = (rand()%(500-100+1)) + 100;

    

    do{

        cout << "Guess what number I have selected, between 1 and 500. \n";
        cin >> guess;



        count++;

        if(guess!=solution && (guess > solution )){
            cout << "Too high, try again.\n";
            cout << "Number of guesses taken: " << count << endl;
        }else if(guess!= solution && (guess < solution)){
            cout << "Too low, try again.\n";
            cout << "Number of guesses taken: " << count << endl;
        }

    }while(guess!= solution);

    cout << "Congrats on guessing the number! You guessed wrong a total of " << count << " times!\n";


    









    return 0;
}
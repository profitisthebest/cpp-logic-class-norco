#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <ctime>
#include <iomanip>
using namespace std;


void addition(string x);
void subtraction(string x);
void multiplication(string x);
void divison(string x);
char displayMenu();
bool isValid(char x);



int main(){
    
    //Declarations
    string name; //user's name
    const string ERROR = "Invalid choice. Please choose a given option.";
    const string QUIT_1 = "Thank you, ",
                 QUIT_2 = ", for using this program! Please use it again if you need more practice!\n\n";
    int seed = time(0);
    
    srand(seed);

    //Welcome Message
    cout << "What is your name?!\n";
    getline(cin, name);
    cout << "\n\nWelcome, " << name  << " to Math Tutor!" << endl << "I will help you test your simple addition, subtraction, multiplication or division skills." << endl;

    displayMenu();
    char choices = displayMenu();

    do{
        

    switch(choices){
        case '1':
            addition(name);
            break;
        case '2':
            subtraction(name);
            break;
        case '3':
            multiplication(name);
            break;
        case '4':
            divison(name);
            break;
        case '5':
            cout << "\nYou chose to quit the program. " << endl << endl;
            break;
        default: 
            cout << ERROR << endl;
            break; 
    }

    displayMenu();
    
    }while(choices == 1 || choices == 2 || choices == 3 || choices ==4);


    cout << QUIT_1 << name << QUIT_2 << endl;
    system("pause");


    return 0;
}

char displayMenu(){
    char choice;
    //Menu Choice
    cout << endl << "Which do you wish to practice? Please enter a number." << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division(this is currently under availible, please do not select this option)" << endl;
    cout << "5. Quit" << endl;
    cin >> choice;

    while(!isValid(choice)){
        cout << "Try again. Enter a valid number:    ";
        cin >> choice;
    }

    return choice;
}

void addition(string x){

            int num1, num2, result, answer, min, max;

            //top number addition
            min = 100;
            max = 999;
            num1 = (rand()%(max-min+1)) + min;

            //bottom number of addition
            min = 10;
            max = 99;
            num2 = (rand()%(max-min+1)) + min;
            result = num1 + num2;

            //user input
            cout << "You have chosen Addition. Please input your answer to the following problem:" << endl;
            cout << setw(5) << num1 << endl;
            cout << "+  " << num2 << endl;
            cout << "_______" << endl;
            cin >> answer;

            int i = 0;

            do{
            
                //test for correct answer
                if (answer ==result){
                    cout << "\nGood job " << x << ", you are correct!." << endl << endl;
                }else if(answer != result){
                    cout << "\nNope. That's not correct " << x << ". Please try again." << endl;
                }
                i++;
            }while(answer != result || i<3);
}

void subtraction(string x){

            int num1, num2, result, answer, min, max;      
            //top number of subtraction
            min = 10;
            max = 99;
            num1 = (rand()%(max-min+1)) +min;

            //bottom number of subtraction
            min = 1;
            max = 9;
            num2 = (rand()%(max-min+1)) +min;
            result = num1 - num2;

            //user input
            cout << "You have chosen Subtraction. Please input your answer to the following problem: " << endl;
            cout << setw(5) << num1 << endl;
            cout << "-   " << num2 << endl;
            cout << "_______" << endl;
            cin >> answer;

            int i = 0;
            
            do{
            
                //test for correct answer
                if (answer ==result){
                    cout << "\nGood job " << x << ", you are correct!." << endl << endl;
                }else if(answer != result){
                    cout << "\nNope. That's not correct " << x << ". Please try again." << endl;
                }
                i++;
            }while(answer != result || i<3);
}

void multiplication(string x){

            int num1, num2, result, answer, min, max;      
            //top number of multiplication
            min = 1;
            max = 12;
            num1 = (rand()%(max-min+1)) +min;

            //bottom number of multiplication
            min = 1;
            max = 12;
            num2 = (rand()%(max-min+1)) +min;
            result = num1 * num2;
            //user input
            cout << "You have chosen Multiplication. Please input your answer to the following problem: " << endl;
            cout << setw(5) << num1 << endl;
            cout << "x   " << num2 << endl;
            cout << "_______" << endl;
            cin >> answer;

            int i = 0;
            
            do{
            
                //test for correct answer
                if (answer ==result){
                    cout << "\nGood job " << x << ", you are correct!." << endl << endl;
                }else if(answer != result){
                    cout << "\nNope. That's not correct " << x << ". Please try again." << endl;
                }
                i++;
            }while(answer != result || i<3);
}

void division(string x){
            int num1, num2, result, answer, min, max;      
            //top number of multiplication
            min = 1;
            max = 12;
            num1 = (rand()%(max-min+1)) +min;

            //bottom number of multiplication
            min = 1;
            max = 12;
            num2 = (rand()%(max-min+1)) +min;
            result = num1/num2;
            //user input
            cout << "You have chosen Divison. Please input your answer to the following problem(round your answer so that there is no remainder): " << endl;
            cout << setw(5) << num1 << endl;
            cout << "/   " << num2 << endl;
            cout << "_______" << endl;
            cin >> answer;

            int i = 0;
            
            do{
            
                //test for correct answer
                if (answer ==result){
                    cout << "\nGood job " << x << ", you are correct!." << endl << endl;
                }else if(answer != result){
                    cout << "\nNope. That's not correct " << x << ". Please try again." << endl;
                }
                i++;
            }while(answer != result || i<3);
}

bool isValid(char x){
    if (x!= '1' || x!= '2' || x!= '3' || x!= 4 || x!=5){
        return false;
    }else{
        return true;
    }
}
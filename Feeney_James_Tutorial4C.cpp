#include <iostream>
using namespace std;

int main(){

    int choice;

    /*get input
    cout << "Enter A, B, or C\n\n";
    cin >> choice;

    switch (choice)
    {
        case 'A':
            cout << "You chose A for Apple \n";
            break;
        case 'B':
            cout << "You chose B for Banana \n";
            break;
        case 'C':
            cout << "You chose C for Carrot \n";
            break;
        default:
            cout << "Invalid INput. \n";
    }*/

    //show menu to the user
    cout << "1. Batman \n";
    cout << "2. Superman \n";
    cout << "3. Spider-Man \n";
    cout << "4. The Notorious RBG \n";

    cout << "enter a number for your favorite super hero. \n\n";
    cin >> choice;

    switch (choice){
        case 1:
            cout << "Superman rocks. \n";
            break;
        case 2:
            cout << "Is superman really a man? of course he is hahaha \n";
            break;
        case 3: 
            cout << "spider-man is a cool dude. nice pick...\n";
            break;
        case 4:
            cout << "\n\n You can't spell TRUTH without RUTH \n";
            break;
        default:
        cout << "\n\n Invalid INput. \n\n";
        

    }
    cout << "\n\n End of Switch \n\n";
    cout << endl << endl;

    return 0;
}
#include <iostream> 
#include <string>
using namespace std;

int main(){
    /*declare variables
    int length, width;
    

    //get input from keyboard
    cout << "Please input the width: ";
    cin >> width; //pause execution

    cout << "Please input length: ";
    cin >> length; //pause execution 

    //display output
    cout << "Area = " << length * width << endl;*/

    string fullName;
    cout << "INput your full name ";
    //cin >> fullName;
    getline(cin, fullName); //getline used for strings with a space in it

    cout << "Your name is " << fullName << endl;




    return 0;
}
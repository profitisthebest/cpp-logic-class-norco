//this program writes user input to a file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    //declaration
    ofstream outputFile;
    ifstream inFile;
    string name1, name2, name3;

    //open an output file
    inFile.open("Friends.txt");
    outputFile.open("Invitation.txt");

    //get the names of three friends
    cout << "Read in the names of three friends from input file.\n";

    getline(inFile, name1);
    getline(inFile, name2);
    getline(inFile, name3);


    //write the names to the file
    cout << "\n\nOutput to the console, which is copied to output file." << endl;
    cout << name1 << endl;
    cout << name2 << endl;
    cout << name3 << endl;

    outputFile << "Invitation List for Halloween Party \n";
    outputFile << name1 << endl;
    outputFile << name2 << endl;
    outputFile << name3 << endl;

    cout << "\n\nThe names were saved to a file.\n";

    //close the file
    outputFile.close();

    system("pause");
    return 0;
}
#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ofstream outputFile;

    outputFile.open("demofile.txt");

    cout << "Now writing data to the file.\n";


    outputFile << "James\n" << "Michelle\n" << "Nicole\n" << "Jayson\n" << "Kevin\n" << "Hanna\n";

    outputFile.close();

    cout << "Done.\n";

    return 0;
}


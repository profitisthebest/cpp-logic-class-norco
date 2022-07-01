#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    ofstream outputFile;
    ifstream inputFile;

    inputFile.open("random.txt");
    outputFile.open("output.txt");
    int temp;
    int total=0, count=0, average, high = 0, low = 1000000;

    while(!inputFile.eof()){
        
        inputFile >> temp;
        total += temp;
        if(temp > high) high = temp;
        if(temp < low) low = temp;
        count++;

    }
    total = (float)total;
    average = total/count;


    //echo the output
    cout << "\n\nOutput to the console, which is copied to output file." << endl;
    cout << "count: " << count << endl;
    cout << "total: " << total << endl;
    cout << "average: " << average << endl;
    cout << "high: " << high << endl;
    cout << "low: " << low << endl;

    outputFile << "Statistics: " << endl;
    outputFile << count << endl;
    outputFile << total << endl;
    outputFile << average << endl;
    outputFile << high << endl;
    outputFile << low << endl;


    inputFile.close();
    outputFile.close();
    return 0;
}
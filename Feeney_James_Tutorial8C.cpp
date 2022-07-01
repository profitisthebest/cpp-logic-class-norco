//this program writes user input to a file

#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream outputFile;
    ifstream salesData;
    int numberOfDays;
    double sales, total;

    /*get the number of days
    cout << "For how many days do you have sales?\n";
    cin >> numberOfDays;*/

    salesData.open("DailySales.txt");


    //open a file names sales.txt
    outputFile.open("Sales.txt");

    //get the sales for each day and write it to the file

    while(salesData >> sales){ //while not the end of the file
    //get the sales for a day

    cout << sales << endl;

    total += sales;

    }

    outputFile << total << endl;
    cout << total << endl;

    //close the file
    outputFile.close();
    cout << "Data written to Sales.txt\n";

    system("pause");
    return 0;
}
#include <iostream>
#include <cmath>
#include <string> 
#include <iomanip>

using namespace std;

int main(){

    //variable declaration
    string nameMovie;
    int adultTickets, childTickets;
    const float adultPrice = 10.00, childPrice = 6.00;

    //input section
    cout << "What is the name of the movie?" << endl;
    getline(cin, nameMovie);

    cout << "How many adult tickets were sold?" << endl;
    cin >> adultTickets;

    cout << "How many child tickets were sold" << endl;
    cin >> childTickets;

    //calculation section
    double grossProfit, netProfit, amountLost;
    grossProfit = (adultTickets * adultPrice) + (childTickets * childPrice);
    netProfit = .2 * grossProfit;
    amountLost = grossProfit - netProfit;

    //output section
    cout << fixed << showpoint << setprecision(2) << "\n\n\n\n\n";
    cout << "Movie Name:       " << nameMovie << "\n";
    cout << "Adult Tickets Sold:       " << adultTickets << endl;
    cout << "Child Tickets Sold:       " << childTickets << "\n\n\n\n";
    cout << "Gross Box Office Profit:       $" << grossProfit << endl;
    cout << "Net Box Office Profit:       $" << netProfit << endl;
    cout << "Amount Paid to Distributor       $" << amountLost << endl;




    return 0;
}
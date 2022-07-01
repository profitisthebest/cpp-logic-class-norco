#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    const float TENPLUS_DISCOUNT = .20,
    FIFTYPLUS_DISCOUNT = .30,
    TWOHUNPLUS_DISCOUNT = .40,
    FIVEHUNPLUS_DISCOUNT = .50,
    DEFAULT_COST = 13.00;

    int quant;
    float totalCost, amountSaved;


    cout << "How many facemasks did you purchase.";
    cin >> quant;

    cout << fixed << setprecision(2);
    
    if(10 <= quant && quant <= 49){
        totalCost = (DEFAULT_COST * quant) * (1 - TENPLUS_DISCOUNT);
        amountSaved = (DEFAULT_COST * quant) * TENPLUS_DISCOUNT;
    }else if (50 <= quant && quant <= 199){
        totalCost = (DEFAULT_COST * quant) * (1 - FIFTYPLUS_DISCOUNT);
        amountSaved = (DEFAULT_COST * quant) * FIFTYPLUS_DISCOUNT;
    }else if (200 <= quant && quant <= 499){
        totalCost = (DEFAULT_COST * quant) * (1 - TWOHUNPLUS_DISCOUNT);
        amountSaved = (DEFAULT_COST * quant) * TWOHUNPLUS_DISCOUNT;
    }else if(quant >= 500){
        totalCost = (DEFAULT_COST * quant) * (1 - FIVEHUNPLUS_DISCOUNT);
        amountSaved = (DEFAULT_COST * quant) * FIVEHUNPLUS_DISCOUNT;
    }else{
        totalCost = (DEFAULT_COST * quant);
    }

    cout << "Your total cost is $" << totalCost << endl;
    cout << "Your total amount saved by discount is $" << amountSaved << endl;



    return 0;
}
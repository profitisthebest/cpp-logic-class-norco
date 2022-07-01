#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

int main(){
    int totalCost, choice, addOnChoice;
    //menu items
    const string ITEM1 = "dim sum", ITEM2 = "banh mi bbq pork", ITEM3 = "pho beef", ITEM4 = "thai tea";
    //cost of items
    const int COST_ITEM1 = 7, COST_ITEM2 = 5, COST_ITEM3 = 8, COST_ITEM4 = 3;
    //add on
    const int COST_ADD_ON = 1;


    cout << "Welcome to Chanta's Asian Cuisine Restaurant, where everything is fresh daily!\n";
    cout << "Please select something from our menu by typing the corresponding number:\n";
    cout << "1. " << ITEM1 << endl << "2. " << ITEM2 << endl << "3. " << ITEM3 << endl << "4. " << ITEM4 << endl;
    cin >> choice;

    switch(choice)
    {

        case 1:
            cout << "Would you like to add our special sauce to the dim sum? It will cost an extra dollar. Type 1 to add it and 0 to not add it" << endl;
            cin >> addOnChoice;
            if (addOnChoice == 1){
                totalCost = COST_ITEM1 + COST_ADD_ON;   
                cout << "You ordered dim sum with special sauce. Your total cost is: $" << showpoint << fixed << setprecision(2) << (float)totalCost << endl;
            }else if (addOnChoice == 0){
                totalCost = COST_ITEM1;
                cout << "You ordered dim sum. Your total cost is: $" << showpoint << fixed << setprecision(2) << (float)totalCost << endl;
            }
            break;
        case 2:
            cout << "Would you like to add special gochu pepper seasoning to your banh mi order? It will cost an extra dollar. Type 1 to add it and 0 to not add it" << endl;
            cin >> addOnChoice;
            if (addOnChoice == 1){
                totalCost = COST_ITEM2 + COST_ADD_ON;  
                cout << "You ordered banh mi pork with special gochu pepper seasoning. Your total cost is: $"  << showpoint << fixed << (float)totalCost << endl;  
            }else if (addOnChoice == 0){
                totalCost = COST_ITEM2;
                cout << "You ordered banh mi pork. Your total cost is: $"  << showpoint << fixed << setprecision(2) << (float)totalCost << endl;
            }
            break;
        case 3:
            cout << "Would you like to add extra beef to your pho beef order? It will cost an extra dollar. Type 1 to add it and 0 to not add it" << endl;
            cin >> addOnChoice;
            if (addOnChoice == 1){
                totalCost = COST_ITEM3 + COST_ADD_ON;  
                cout << "You ordered pho beef with extra beef. Your total cost is: $"  << showpoint << fixed << setprecision(2) << (float)totalCost << endl;  
            }else if (addOnChoice == 0){
                totalCost = COST_ITEM3;
                cout << "You ordered pho beef. Your total cost is: $"  << showpoint << fixed << setprecision(2) << (float)totalCost << endl;
            }
            break;
        case 4:
            cout << "Would you like to add boba to your thai tea order? It will cost an extra dollar. Type 1 to add it and 0 to not add it" << endl;
            cin >> addOnChoice;
            if (addOnChoice == 1){
                totalCost = COST_ITEM4 + COST_ADD_ON; 
                cout << "You ordered thai tea with boba. Your total cost is: $"  << showpoint << fixed << setprecision(2) << (float)totalCost << endl;   
            }else if (addOnChoice == 0){
                totalCost = COST_ITEM4;
                cout << "You ordered thai tea. Your total cost is: $"  << showpoint << fixed << setprecision(2) << (float)totalCost << endl;
            }
            break;
    }
    
    



    return 0;
}
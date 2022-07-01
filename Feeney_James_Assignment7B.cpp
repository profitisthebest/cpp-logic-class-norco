#include <iostream>
#include <string>
#include <iomanip> 
#include <cctype>
using namespace std;



bool isValid(int x);
bool isValid2(int y);
bool isValid(char x);
void dimSum(int &addOnChoice, int &totalCost);
void banhMi(int &addOnChoice, int &totalCost);
void phoBeef(int &addOnChoice, int &totalCost);
void thaiTea(int &addOnChoice, int &totalCost);





int main(){
    int totalCost = 0, choice, addOnChoice;
    //menu items
    const string ITEM1 = "dim sum", ITEM2 = "banh mi bbq pork", ITEM3 = "pho beef", ITEM4 = "thai tea";
    char again;

    do{

        cout << "Welcome to Chanta's Asian Cuisine Restaurant, where everything is fresh daily!\n";
        cout << "Please select something from our menu by typing the corresponding number:\n";
        cout << "1. " << ITEM1 << endl << "2. " << ITEM2 << endl << "3. " << ITEM3 << endl << "4. " << ITEM4 << endl;
        cin >> choice;
        //validate input
        while(!(isValid2(choice))){
            cout << "Error: please input a number that is on the menu.\n";
            cin >> choice;
        }

        switch(choice)
        {

            case 1:

                dimSum(addOnChoice, totalCost);
                break;
            case 2:
                banhMi(addOnChoice, totalCost);
                break;
            case 3:
                phoBeef(addOnChoice, totalCost);
                break;
            case 4:
                thaiTea(addOnChoice, totalCost);
                break;
        }

        cout << "Would you like to order another item? please type 'Y' for yes and 'N' for no." << endl;
        cin >> again;
        again = toupper(again);
        while(!isValid(again)){
            cout << "Error: invalid input. Please type in a Y or a N." << endl;
        }


    }while(again == 'Y');
    
    return 0;
}


bool isValid(int x){

if (x==1 || x==0) return true;
else return false;

}

bool isValid2(int y){
    if (y <=4 && y >=1) return true;
    else return false;
    
}

bool isValid(char x){

    if(x == 'Y' || x == 'N') return true;
    else return false;

}

void thaiTea(int &addOnChoice, int &totalCost){

    int COST_ITEM4 = 3, COST_ADD_ON = 1;
    cout << "Would you like to add boba to your thai tea order? It will cost an extra dollar. Type 1 to add it and 0 to not add it" << endl;
    cin >> addOnChoice;
    //validate input
    while(!(isValid(addOnChoice))){
    cout << "Error: please input a 1 or a 0.\n";
    cin >> addOnChoice;
    }

    if (addOnChoice == 1){
        totalCost += (COST_ITEM4 + COST_ADD_ON); 
        cout << "Your total cost is: $"  << showpoint << fixed << setprecision(2) << (float)totalCost << endl;   
    }else if (addOnChoice == 0){
        totalCost += COST_ITEM4;
        cout << "Your total cost is: $"  << showpoint << fixed << setprecision(2) << (float)totalCost << endl;
    }

    //add on number 2
    cout << "Would you like to add aloe vera to your thai tea order? It will cost an extra dollar. Type 1 to add it and 0 to not add it" << endl;
    cin >> addOnChoice;

    //validate input
    while(!(isValid(addOnChoice))){
    cout << "Error: please input a 1 or a 0.\n";
    cin >> addOnChoice;
    }

    if (addOnChoice == 1){
        totalCost += COST_ADD_ON;  
        cout << "Your total cost is: $" << showpoint << fixed << setprecision(2) << (float)totalCost << endl;
    }else if (addOnChoice == 0){
        totalCost = totalCost;
        cout << "Your total cost is: $" << showpoint << fixed << setprecision(2) << (float)totalCost << endl;
    }

    //add on number 3
    cout << "Would you like to add pearls to your thai tea order? It will cost an extra dollar. Type 1 to add it and 0 to not add it" << endl;
    cin >> addOnChoice;

    //validate input
    while(!(isValid(addOnChoice))){
    cout << "Error: please input a 1 or a 0.\n";
    cin >> addOnChoice;
    }

    if (addOnChoice == 1){
        totalCost += COST_ADD_ON;  
        cout << "Your total cost is: $" << showpoint << fixed << setprecision(2) << (float)totalCost << endl;
    }else if (addOnChoice == 0){
        totalCost = totalCost;
        cout << "Your total cost is: $" << showpoint << fixed << setprecision(2) << (float)totalCost << endl;
    }
}

void phoBeef(int &addOnChoice, int &totalCost){

    int COST_ITEM3 = 8, COST_ADD_ON = 1;
    //add on number 1
    cout << "Would you like to add extra beef to your pho beef order? It will cost an extra dollar. Type 1 to add it and 0 to not add it" << endl;
    cin >> addOnChoice;

    //validate input
    while(!(isValid(addOnChoice))){
    cout << "Error: please input a 1 or a 0.\n";
    cin >> addOnChoice;
    }

    if (addOnChoice == 1){
        totalCost += (COST_ITEM3 + COST_ADD_ON);  
        cout << "Your total cost is: $"  << showpoint << fixed << setprecision(2) << (float)totalCost << endl;  
    }else if (addOnChoice == 0){
        totalCost += COST_ITEM3;
        cout << "Your total cost is: $"  << showpoint << fixed << setprecision(2) << (float)totalCost << endl;
    }

    //add on number 2
    cout << "Would you like to add ultimate spicy hot sauce to your pho beef order? It will cost an extra dollar. Type 1 to add it and 0 to not add it" << endl;
    cin >> addOnChoice;

    //validate input
    while(!(isValid(addOnChoice))){
    cout << "Error: please input a 1 or a 0.\n";
    cin >> addOnChoice;
    }

    if (addOnChoice == 1){
        totalCost += COST_ADD_ON;  
        cout << "Your total cost is: $" << showpoint << fixed << setprecision(2) << (float)totalCost << endl;
    }else if (addOnChoice == 0){
        totalCost = totalCost;
        cout << "Your total cost is: $" << showpoint << fixed << setprecision(2) << (float)totalCost << endl;
    }

    //add on number 3
    cout << "Would you like to add extra msg to your pho beef order? It will cost an extra dollar. Type 1 to add it and 0 to not add it" << endl;
    cin >> addOnChoice;

    //validate input
    while(!(isValid(addOnChoice))){
    cout << "Error: please input a 1 or a 0.\n";
    cin >> addOnChoice;
    }

    if (addOnChoice == 1){
        totalCost += COST_ADD_ON;  
        cout << "Your total cost is: $" << showpoint << fixed << setprecision(2) << (float)totalCost << endl;
    }else if (addOnChoice == 0){
        totalCost = totalCost;
        cout << "Your total cost is: $" << showpoint << fixed << setprecision(2) << (float)totalCost << endl;
    }
}

void banhMi(int &addOnChoice, int &totalCost){

    int COST_ITEM2 = 5, COST_ADD_ON = 1;
    //add on number 1
    cout << "Would you like to add special gochu pepper seasoning to your banh mi order? It will cost an extra dollar. Type 1 to add it and 0 to not add it" << endl;
    cin >> addOnChoice;

    //validate input
    while(!(isValid(addOnChoice))){
    cout << "Error: please input a 1 or a 0.\n";
    cin >> addOnChoice;
    }

    if (addOnChoice == 1){
        totalCost += (COST_ITEM2 + COST_ADD_ON);  
        cout << "Your total cost is: $"  << showpoint << fixed << (float)totalCost << endl;  
    }else if (addOnChoice == 0){
        totalCost += COST_ITEM2;
        cout << "Your total cost is: $"  << showpoint << fixed << setprecision(2) << (float)totalCost << endl;
    }

    //add on number 2
    cout << "Would you like to add special red bean sauce to your banh mi order? It will cost an extra dollar. Type 1 to add it and 0 to not add it" << endl;
    cin >> addOnChoice;

    //validate input
    while(!(isValid(addOnChoice))){
    cout << "Error: please input a 1 or a 0.\n";
    cin >> addOnChoice;
    }

    if (addOnChoice == 1){
        totalCost += COST_ADD_ON;  
        cout << "Your total cost is: $" << showpoint << fixed << setprecision(2) << (float)totalCost << endl;
    }else if (addOnChoice == 0){
        totalCost = totalCost;
        cout << "Your total cost is: $" << showpoint << fixed << setprecision(2) << (float)totalCost << endl;
    }

    //add on number 3
    cout << "Would you like to add sesame bread to your banh mi order? It will cost an extra dollar. Type 1 to add it and 0 to not add it" << endl;
    cin >> addOnChoice;

    //validate input
    while(!(isValid(addOnChoice))){
    cout << "Error: please input a 1 or a 0.\n";
    cin >> addOnChoice;
    }

    if (addOnChoice == 1){
        totalCost += COST_ADD_ON;  
        cout << "Your total cost is: $" << showpoint << fixed << setprecision(2) << (float)totalCost << endl;
    }else if (addOnChoice == 0){
        totalCost = totalCost;
        cout << "Your total cost is: $" << showpoint << fixed << setprecision(2) << (float)totalCost << endl;
    }
}


void dimSum(int &addOnChoice, int &totalCost){

    int COST_ADD_ON = 1, COST_ITEM1 = 7;

    //add on #1
    cout << "Would you like to add our special sauce to the dim sum? It will cost an extra dollar. Type 1 to add it and 0 to not add it" << endl;
    cin >> addOnChoice;

    //validate input
    while(!(isValid(addOnChoice))){
    cout << "Error: please input a 1 or a 0.\n";
    cin >> addOnChoice;
    }

    if (addOnChoice == 1){
        totalCost += (COST_ITEM1 + COST_ADD_ON);   
        cout << "Your total cost is: $" << showpoint << fixed << setprecision(2) << (float)totalCost << endl;
    }else if (addOnChoice == 0){
        totalCost += COST_ITEM1;
        cout << "Your total cost is: $" << showpoint << fixed << setprecision(2) << (float)totalCost << endl;
    }

    //add on #2
    cout << "Would you like to add ginger powder to the dim sum? It will cost an extra dollar. Type 1 to add it and 0 to not add it" << endl;
    cin >> addOnChoice;

    //validate input
    while(!(isValid(addOnChoice))){
    cout << "Error: please input a 1 or a 0.\n";
    cin >> addOnChoice;
    }

    if (addOnChoice == 1){
        totalCost += COST_ADD_ON;  
        cout << "Your total cost is: $" << showpoint << fixed << setprecision(2) << (float)totalCost << endl;
    }else if (addOnChoice == 0){
        totalCost = totalCost;
        cout << "Your total cost is: $" << showpoint << fixed << setprecision(2) << (float)totalCost << endl;
    }

    //add on #3
    cout << "Would you like to add cilantro to the dim sum? It will cost an extra dollar. Type 1 to add it and 0 to not add it" << endl;
    cin >> addOnChoice;

    //validate input
    while(!(isValid(addOnChoice))){
    cout << "Error: please input a 1 or a 0.\n";
    cin >> addOnChoice;
    }

    if (addOnChoice == 1){
        totalCost += COST_ADD_ON;  
        cout << "Your total cost is: $" << showpoint << fixed << setprecision(2) << (float)totalCost << endl;
    }else if (addOnChoice == 0){
        totalCost = totalCost;
        cout << "Your total cost is: $" << showpoint << fixed << setprecision(2) << (float)totalCost << endl;
    }            
}


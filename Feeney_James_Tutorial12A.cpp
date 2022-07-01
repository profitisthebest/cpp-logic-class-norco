/*Procedural Programming- the method of programming where you have your defined procedures(or functions) that each do their own task and you just call them into main to 
do what you want.
Object-Oritented Programming- you create objects instead of procedures in order to run your programs and execute tasks
Class- its code that outlines what data the object holds and what operations it can perform
Instance- an object that is created using the class that you wrote
Private-  an access specifier: any of the instances under private can only be used by functions of that class
Public-  another access specifier: any of the instances under public can be used whenever, even outside of the class
Constructor- a constructor is a function that automatically gets called whenever you create a new object
In Line Functions- functions that are inline allow the compiler to place a copy of the code wherever the function gets called
Member Functions- member functions are functions that are apart of a class*/

#include <iostream>
using namespace std;

class BankAccount{
    private:
        double balance;
    public:
        BankAccount(double startingBal){
            balance = startingBal;
        }
        void deposit(double amount){
            balance+= amount;
        }
        void withdraw(double amount){
            balance-=amount;
        }
        double getBalance() const{
            return balance;
        }
};



int main(){

    BankAccount savingsAccount(2500.0);
    BankAccount checkingAccount(500.0);

    savingsAccount.deposit(500.0);
    checkingAccount.withdraw(200.0);

    cout << "The savings account balance is $" << savingsAccount.getBalance() << endl;
    cout << "The checking account balance is $" << checkingAccount.getBalance() << endl;


    return 0;
}
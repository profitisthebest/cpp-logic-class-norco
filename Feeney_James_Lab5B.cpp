#include<iostream>
using namespace std;

int main(){

    int x;

    do{
        


        if(x == 1){
            cout << "Superman really is super!! hahahahaha\n";
        }else if(x == 2){
            cout << "Batman is a legend!! hahahaahahaha\n";
        }else if(x==3){
            cout << "You can't spell TRUTH without RUTH\n";
        }

        cout << "Please enter the number of your chosen Superhero below or enter 4 to quit: 1.Superman 2.Batman 3. The Notorious RBG 4.QUIT THE PROGRAM \n";
        cin >> x;



    }while (x == 1 || x == 2 || x == 3);

    

    return 0;
}
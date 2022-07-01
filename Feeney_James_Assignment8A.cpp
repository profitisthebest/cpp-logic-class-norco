#include <iostream>
#include <fstream>
#include <string>
using namespace std;


bool checkCredentials(string username, string password){

ifstream inputFile;
inputFile.open("correctData.txt");
string ucompare, pcompare;

getline(inputFile, ucompare);
getline(inputFile, pcompare);

inputFile.close();

if(ucompare == username){
    if(pcompare == password) return true;
    else return false;
}else{
    return false;
}
}

void login(){
string username, password;
int i = 3;
while(i >= 0){

    cout << "Login\n" << "username: "; cin >> username; cout << endl;
    cout << "password: "; cin >> password; cout << endl;

if(!checkCredentials(username, password)){
    cout << "Invalid username or password. You have " << i << " remaining.\n";

}else if(checkCredentials(username, password)){
    cout << "Login successful!\n";
    break;
} 

i--;
}
if(i < 0 ) cout << "Attempts exceeded.\n";
}


int main(){

    login();

    
    return 0;
}
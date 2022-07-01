#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    //variable declaration
    int choice = 0, numofFemales, numofMales, numofNew, numofCont;
    char cont = 'C', gender, newOrCont;
    float totalGpaFemale = 0, totalGpaMale = 0, tempGpaFemale, tempGpaMale, averageGpaFemale, averageGpaMale, tempFinalFemale, tempFinalMale;
    float totalFinalFemale = 0, totalFinalMale = 0, averageFinalFemale, averageFinalMale, tempGpaNew, tempGpaCont, totalGpaNew, totalGpaCont;
    float averageGpaNew, averageGpaCont;


    cout << "Welcome to the University of RBG grade comparison program for Fall 2020!\n" << endl;

    do{
        //pick something from the menu for the program to execute

        cout << "Please choose an option from the following menu and enter the number:\n 1. compare Female vs Male overall average GPA for Fall 2020\n"
            << " 2. compare Female vs Male C++ average final exam scores for Fall 2020\n 3. compare continuing students vs new students average GPA for Fall 2020\n"
            << " 4. Quit the program" << endl;
        cin >> choice;

        //validate the input

        while(!(choice <= 4 && choice >= 1)){
            cout << "Please input an integer between 1 and 4 that corresponds with your choice from the menu" << endl;
            cin >> choice;
        }

        switch(choice){
            case 1:
                cont = 'C';
                numofFemales = 0, numofMales = 0;
                while(cont != 'Q'){
                    cout << "Enter F for female student or M for male student then enter the gpa of the student for Fall 2020\n";
                    cin >> gender;
                    gender = toupper(gender);
                    
                    //validate the input

                   while(!(gender == 'F' || gender == 'M')){
                       cout << "Please enter either F for female or M for male\n";
                       cin >> gender;
                       gender = toupper(gender);
                   }
                    
                    //gpa calculations

                   if(gender == 'F'){
                       cin >> tempGpaFemale;
                       cout << showpoint << fixed << setprecision(2);
                       //validate the input

                       while(!(tempGpaFemale >= 0.0 && tempGpaFemale <= 4.0)){
                           cout << "Please input a gpa that is between 0.0 and 4.0\n";
                           cin >> tempGpaFemale;
                       }
                        totalGpaFemale += tempGpaFemale;
                        numofFemales += 1;
                   } else if(gender == 'M'){
                       cin >> tempGpaMale;

                       //validate the input

                       while(!(tempGpaMale >= 0.0 && tempGpaMale <= 4.0)){
                           cout << "Please input a gpa that is between 0.0 and 4.0\n";
                           cin >> tempGpaMale;
                       }
                       totalGpaMale += tempGpaMale;
                       numofMales += 1;
                   }

                    //choice to continue adding more students or stop there
                    cout << "Please enter 'C' to add another student or 'Q' to quit adding students and calculate the average GPAs\n";
                    cin >> cont;
                    cont = toupper(cont);

                    //validate the input
                    while(!(cont == 'C' || cont == 'Q')){
                        cout << "Wrong input! Please enter either 'C' to add another student or a 'Q' to quit adding students and calculate the average GPAs\n";
                        cin >> cont;
                        cont = toupper(cont);
                    }
                }
                averageGpaFemale = totalGpaFemale/numofFemales;
                averageGpaMale = totalGpaMale/numofMales;
                cout << "The average gpa for Males during Fall 2020 was " << averageGpaMale << " and the average gpa for Females during Fall 2020 was " << averageGpaFemale 
                    << "!\n\n\n";
            break;

            case 2:
                cont = 'C';
                numofFemales = 0, numofMales = 0;
                while(cont != 'Q'){
                    cout << "Enter F for female student or M for male student then enter the final exam score of the student\n";
                    cin >> gender;
                    gender = toupper(gender);

                    //validate the input

                    while(!(gender == 'F' || gender == 'M')){
                       cout << "Please enter either F for female or M for male\n";
                       cin >> gender;
                       gender = toupper(gender);
                   }

                    if(gender == 'F'){
                        cin >> tempFinalFemale;

                        //validate the input

                        while(!(tempFinalFemale >= 0 && tempFinalFemale <= 100)){
                            cout << "Please input a score that is between 0 and 100\n";
                            cin >> tempFinalFemale;
                        }
                        totalFinalFemale += tempFinalFemale;
                        numofFemales += 1;
                    } else if(gender == 'M'){
                        cin >> tempFinalMale;
                        
                        //validate the input

                        while(!(tempFinalMale >= 0 && tempFinalMale <= 100)){
                            cout << "Please input a score that is between 0 and 100\n";
                            cin >> tempFinalMale;
                        }
                        totalFinalMale += tempFinalMale;
                        numofMales += 1;
                    }
                    cout << "Please enter C to add another student or Q to quit adding students and calculate the average Final exam scores\n";
                    cin >> cont;
                    cont = toupper(cont);

                    //validate the input

                    while(!(cont == 'C' || cont == 'Q')){
                        cout << "Wrong input! Please enter either 'C' to add another student or a 'Q' to quit adding students and calculate the average Final exam scores\n";
                        cin >> cont;
                        cont = toupper(cont);
                    }
                }
                averageFinalFemale = totalFinalFemale/numofFemales;
                averageFinalMale = totalFinalMale/numofMales;
                cout << "The average Fall 2020 C++ Final exam score for Males was " << averageFinalMale << " and the average Fall 2020 c++ Final exam score for Females was "
                << averageFinalFemale << "!\n\n\n";
            break;
            
            case 3:
                cont = 'C';
                numofCont = 0, numofNew = 0;
                while(cont != 'Q'){
                    cout << "Enter C for continuing student or N for new student, then enter the gpa of the student\n";
                    cin >>  newOrCont;
                    newOrCont = toupper(newOrCont);

                    //validate input

                    while(!(newOrCont == 'C' || newOrCont == 'N')){
                        cout << "Please enter either a C for continuing student or an N for new student\n";
                        cin >> newOrCont;
                        newOrCont = toupper(newOrCont);
                    }
                
                    if(newOrCont = 'C'){
                        cin >> tempGpaCont;
                        while(!(tempGpaCont >= 0.0 && tempGpaCont <= 4.0)){
                            cout << "Please enter a gpa that is between 0.0 and 4.0" << endl;
                            cin >> tempGpaCont;
                        }
                        totalGpaCont += tempGpaCont;
                        numofCont += 1;
                    } else if(newOrCont = 'N'){
                        cin >> tempGpaNew;
                        while(!(tempGpaNew >= 0.0 && tempGpaNew <= 4.0)){
                            cout << "Please enter a gpa that is between 0.0 and 4.0" << endl;
                            cin >> tempGpaNew;
                        }
                        totalGpaNew += tempGpaNew;
                        numofNew += 1;
                    }

                    cout << "Please enter C to add another student or Q to quit adding students and calculate the average gpa\n";
                    cin >> cont;
                    cont = toupper(cont);
                    
                    //validate the input
                        while(!(cont == 'C' || cont == 'Q')){
                            cout << "Wrong input! Please enter either 'C' to add another student or a 'Q' to quit adding students and calculate the average GPAs\n";
                            cin >> cont;
                            cont = toupper(cont);
                        }
                
                }
                averageGpaCont = totalGpaCont/numofCont;
                averageGpaNew = totalGpaNew/numofNew;
                cout << "The average gpa for the continuing students was " << averageGpaCont << " and the average gpa for the new students was " << averageGpaNew << "!\n\n\n";
            break;
            
            case 4:
                cout << "You have chosen to quit the program!\n";
            break;
        }
        
    }while(choice != 4);








    return 0;
}
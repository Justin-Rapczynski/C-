// Name: Justin Rapczynski
// Class: CSCE 2100 Project 2
// Date: 5/1/2019
// Description: This is the code for the soda cans problem,
// it takes basic user inputs and does a math equation to see how many sodas your friend drank
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

void calc(int bottlesstart, int bottlesfound, int fill, int empty, int drank, int totaldrank, vector<int> drankC) // this is the code that calculates how many sodas your friend had throughout the day
{
           int temp = bottlesfound; // temporary value that adds the number of bottlesfound to the integer empty that represents all the empty bottles

    drank = bottlesstart / fill; // finds the ammount of sodas drank
        empty = bottlesstart % fill; // calculates what bottles are empty after not being able to purchase a drink
             empty += drank; // adds bottles drank to empty

                drankC.push_back(drank); // adds number to the vector

    while (fill <= empty)  // as long as fill is less than empty bottle count it keeps dividing the two then using modulos to find remainders
    {
        drank = empty / fill;
            empty %= fill;
                empty += drank;
                     drankC.push_back(drank);
    }

    empty = empty + temp; // temp var is used in order to add bottlesfound after already messing with those numbers
    
    temp = 0;

    while (fill <= empty) // same as above this keeps dividing as long as fill is less than empty
    {
        drank = empty / fill;
            empty %= fill;
                empty += drank;
                  
                    drankC.push_back(drank);
        
    }
    
     for (int i = 0; i < drankC.size(); i++) // adds all the locations to one full number
        {
       
            totaldrank += drankC.at(i);

          }
cout << endl;
cout << "Your friend had a total of " << totaldrank << " drinks today." << endl << endl;
}


int main()
{

vector<int> drankC;
int bottlesstart;
int bottlesfound;
int fill;
int empty;
int drank;
int totaldrank = 0;
int x = 1;
 

   while(x == 1){ // asks for bottles at the start using if statement to make sure number entered is within parameters
    cout << "Enter how many bottles your friend had to start: ";
        cin >> bottlesstart;
            cout << endl;

    if(bottlesstart >= 0 && bottlesstart <= 999){
        x = 0;
    }
    else{
        cout << "Error, please pick a number between 0 and 999" << endl;
    }


}
x = 1;

while(x == 1){ // asks for found bottes at the start using if statement to make sure number entered is within parameters
    cout << "Enter how many bottles your friend found: ";
        cin >> bottlesfound;
            cout << endl;

    if(bottlesfound >= 0 && bottlesfound <= 999){
        x = 0;
    }
    else{
        cout << "Error, please pick a number between 0 and 999" << endl;
    }
}

x = 1;

while(x == 1){ // asks for cost to buy a soda using if statement to make sure number entered is within paramaters
    cout << "Enter how many bottles it takes to buy a new drink: ";
     cin >> fill;
         cout << endl;

    if(fill >= 2 && fill <= 999){
        x = 0;
    }
    else{
        cout << "Error, please pick a number between 2 and 999" << endl;
    }
}

    cout << endl << endl << endl << endl; // end lines in order to break up user given data with computer outputted data
    
    cout << endl << "Possesion at the start of the day: " << bottlesstart << endl;
    
    cout << endl << "Empty soda bottles found during the day: "  << bottlesfound << endl;
    
    cout << endl << "Bottles required to buy a new soda: " << fill << endl;
    
        // calls for function that calculates and prints total sodas drank
     calc(bottlesstart, bottlesfound, fill, empty, drank, totaldrank, drankC);

    return 0;
}
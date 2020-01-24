//This program was created by Justin Rapczynski Jar0574 justinrapczynski@my.unt.edu
//CSCE2100 Project 1 " The Jug problem"

#include <iostream>
#include <cstdlib>
#include<cmath>
using namespace std;



int equation(int jugA, int jugB, int wateramnt){ // this function does the math required to fill both jugs

int jAtemp; // temporary variables for equation
int jBtemp; // tempoarary variables for equation

jAtemp = jugA; // making temp equal to user entered jug a
jBtemp = 0; // making temp equal to 0 (since we will be filling this jug with jug a)

while (jAtemp + jBtemp != wateramnt) // while the two jugs dont equal water amnt...
{
   cout << jAtemp << "   " << jBtemp << endl ; // print numbers
  
   int t;
   t = min(jAtemp, jugB - jBtemp); // another temp variable which is equal to the minimum num of either juga or jug b - its temp in case we go over fill amount (ex if we have a jug with 3 and 7 if we fill small to large we eventually get 3 and 6 the temp will add 3 and 6 and get 9 then subtract by user values to get 2 and 7)

    jBtemp = jBtemp + t; // adding temp numbers to jugs
    jAtemp = jAtemp - t;

    cout << jAtemp << "   " << jBtemp << endl ; //print again

   if (jAtemp == 0){ // if statement that says if jug a = 0 to refill it
       jAtemp = jugA;
      cout << jAtemp << "   " << jBtemp << endl ;
   }

    if (jBtemp == jugB){ // if statement that says if jug b = 0 to empty it
        jBtemp = 0;
        cout << jAtemp << "   " << jBtemp << endl ;
    }

}

}



int checkdivisor(int x, int y) // this checks the greatest common divisor this is only used to check if solutions are possible
{
if (y==0){
   return x;
}
return checkdivisor(y, x%y);
}


int checker(int onejug, int secondjug, int total) //this function will check the requirement and print out fail messages if requirements are not met
{

if (onejug > secondjug){ // this if staement makes the first number the smaller number
    swap(onejug, secondjug);
}


if (onejug <= 0 || secondjug <= 0 || total <= 0){ // this makes sure all user inputed numbers are greater than 0
cout << endl << "Inputs need to be greater than 0 please try again" << endl;
   return -1;
}


if (total >onejug + secondjug){ // this fails if the user enters an amount of water greater than both jugs
    cout << endl;
    cout << endl << "This is not Possible since the amount water wanted is more than both jugs"<< endl;

return -1;
}


if ((total % checkdivisor(onejug,secondjug)) != 0){ // this fails if the wateramnt divided by the greatest common divisor does not equal 0 (which means that the amount wanted is not possible)
cout << endl;
cout << endl << "This is not possible" << endl;
return -1;
}

if (onejug == total){ // prints out one jug if one jug equals the wateramnt wanted
    cout << endl << onejug << "   " << "0"<< endl;
}

if (onejug + secondjug == total){ // prints out both jugs if both jugs added together equals goal
    cout << endl << onejug << "   " << secondjug << endl;
    return -1;
}
return equation(onejug, secondjug, total); // returns equation with variables used in this function
}




int main() // main simply takes in user entered date and sends it to the functions to solve the problem
{
    int jugA; // int for user inputed jug A
    int jugB; // int for user inputed jug b
    int wateramnt; // int for user inputed amount of water wanted
       
    cout << endl << "Enter the capacity of Jug A" << endl; // ask for jug A capcity
    cin >> jugA; // take in jug A capacity
    
    cout << "Enter the capacity of Jug B" << endl; // ask for jug b capacity
    cin >> jugB; // take in jug B capacity

    cout << "Enter the ammount of water wanted in the jugs" << endl; // ask for amount of water wanted
    cin >> wateramnt; // take in amount of water wanted
    
    checker(jugA, jugB, wateramnt); // run checker function with values given by user
}
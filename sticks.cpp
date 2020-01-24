// Name: Justin Rapczynski
// Class: CSCE 2100 Project 2
// Date: 5/1/2019
// Description: This code will calculate the smallest and largest number that you can possibly make
// with "sticks" the things that create numbers on older digital clocks.
#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
using namespace std;
vector<double> smallest; // double for the smallest int possible
vector<double> largest; // double for largest int possible

void largestNum(int Lstick) // calculates largest number
{
    int ones; // used to find how many ones need to go on the end of the number (most large numbers use 1 for the end because it most recorseful way to gain a decimal point)

    if (Lstick % 2 == 0) // checks sticks modulo if it equals 0 the ones is equal to sticks in half
    {
        ones = Lstick / 2;

        for (int i = 0; i < ones; i++)
        {
            largest.push_back(1);
        }

    }
    else // else we put a 7 at the front then push back the ones
    {
        largest.push_back(7);
        ones = (Lstick - 3) / 2;

            for (int i = 0; i < ones; i++)
                {
                    largest.push_back(1);
                 }
        cout << endl;
    }
}

void smallestNum(int num)
{
int eight; // you wil see int eight throughtout the entire code small numbers have a tendancy to end in in eight so this counts how many eights to put at the end

if (num == 3) // the belows look for certain numbers and put a specific number at the end of the small vector if they match
{
    smallest.push_back(7);
}
else if (num == 4)
{
    smallest.push_back(4);
}
else if (num == 8)
{
    smallest.push_back(10);
}
else if (num == 9)
{
    smallest.push_back(18);
}
else if (num == 10)
{
    smallest.push_back(22);
}

else if(num % 7 == 1) // from here below we check modulo and depending on each modulo answer we send certain numbers to the vector and calculate eights
{
    smallest.push_back(1);
    
        smallest.push_back(0);

            eight = ((num + 6) / 7) - 2;

    for (int i = 0; i < eight; i++) // sends eights to vector
    {
        smallest.push_back(8);
        }

}

else if (num % 7 == 2)
{
    smallest.push_back(1);

         eight = ((num + 5) / 7) - 1;

    for (int i = 0; i < eight; i++)
    {
        smallest.push_back(8);
    }
}

else if (num % 7 == 3)
{
    smallest.push_back(2);
    
        smallest.push_back(0);
    
            smallest.push_back(0);

                eight = ((num + 4) / 7) - 3;

    for (int i = 0; i < eight; i++)
    {
        smallest.push_back(8);
    }

}

else if (num % 7 == 4)
{
    smallest.push_back(2);
    
        smallest.push_back(0);

            eight = ((num +3) / 7) - 2;

    for (int i = 0; i < eight; i++)
    {
        smallest.push_back(0);
    }

}

else if (num % 7 == 5)
{
    smallest.push_back(2);

        eight = ((num +2) / 7) - 1;

    for(int i = 0; i < eight; i++)
    {
        smallest.push_back(8);
    }
}

else if (num % 7 == 6)
{
    smallest.push_back(6);

        eight = ((num + 1) / 7) - 1;

    for (int i = 0; i < eight; i++)
    {
        smallest.push_back(8);
    }
}

else if (num % 7 == 7)
{
    eight = (num / 7);

    for (int i = 0; i < eight; i++)
    {
        smallest.push_back(8);
    }
}

}


int main()
{
    int sticks; // user entered variable
    int x = 1; // variable used for while loop to check the users input
        
// below asks user for the amount of sticks and takes in data it will also check to make sure the user entered number is within parameters
      
      while (x == 1){
          cout << "Enter number of sticks you will be working with, between 2 and 100: ";
        cin >> sticks;
        cout << endl;
        if (sticks >= 2 && sticks <= 100) // if statement to check that input is within parameters
        {
            cout << "Error, please pick a number between 2 and 100" << endl;
            x = 0;
            }

      }
      
    smallestNum(sticks); // calculates the smallest number possible
    largestNum(sticks); // calculates the largest number possible
// below is where the code tells the computer to output the information it has calculated to the user
    cout << "With " << sticks << " sticks the smallest and largest numbers you can make are below:" << endl;
    cout << "Smallest: ";
    for (int i = 0; i < smallest.size(); i++) // this for loop will print out the smallest number each individual number of the vector at a time
    {
        cout << smallest.at(i);
    }

    cout << endl;
    cout << "Largest: ";

    for (int i = 0; i < largest.size(); i++)// this for loop will print out the largest number each individual number of the vector at a time
    {
        cout << largest.at(i);
    }

    cout << endl; // end num to make it look more pretty
return 0;

}   



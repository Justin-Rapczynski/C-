#include <iostream>
#include <string>

#include "Animal.h"

using namespace std;

void Animal::PrintInfo()
{
	cout << "Weight: " << Get_Weight() << "   Name: " << Get_Name() << "   Gender: " << Get_Gender()
	     << "   Color Description: " << Get_Color_Desc() << endl;
}

Animal::Animal()       // Default Constructor
{
	Weight = 0;
	Name = "No Name";
	Gender = "No Gender";
	Color_Desc = "No Color Description";
}

Animal::Animal(int Weight, string Name, string Gender, string Color_Desc)      // Overloaded Constructor
{
	this -> Weight = Weight;
	this -> Name = Name;
	this -> Gender = Gender;
	this -> Color_Desc = Color_Desc;
}


//Setters
void Animal::Set_Weight(int Weight)
{
	this -> Weight = Weight;
}

void Animal::Set_Name(string Name)
{
	this -> Name = Name;
}

void Animal::Set_Gender(string Gender)
{
	this -> Gender = Gender;
}

void Animal::Set_Color_Desc(string Color_Desc)
{
	this -> Color_Desc = Color_Desc;
}


//Getters
int Animal::Get_Weight() const
{
	return Weight;
}

string Animal::Get_Name() const
{
	return Name;
}

string Animal::Get_Gender() const
{
	return Gender;
}

string Animal::Get_Color_Desc() const
{
	return Color_Desc;
}



















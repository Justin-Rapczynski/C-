#include <iostream>
#include <string>

#include "Cow.h"

using namespace std;

void Cow::PrintInfo()
{
	cout << "Breed: " << Get_Breed() << "   Spayed or Neutered: " << Get_Spayed_Neutered()
	     << "   Registration ID: " << Get_Registration_ID() << "   Other Comments: " << Get_Other_Comments()
	     << endl;
}


Cow::Cow()  //Default Constructor
{
	Breed = "No Breed";
        Spayed_Neutered = "No Info";
        Registration_ID = "No Registration ID";
       	Other_Comments = "No Other Comments";
}

Cow::Cow(string Breed, string Spayed_Neutered, string Registration_ID, string Other_Comments)
{
	this -> Breed = Breed;
	this -> Spayed_Neutered = Spayed_Neutered;
	this -> Registration_ID = Registration_ID;
	this -> Other_Comments = Other_Comments;
}


//Setters
void Cow::Set_Breed(string Breed)
{
	 this -> Breed = Breed;
}

void Cow::Set_Spayed_Neutered(string Spayed_Neutered)
{
	this -> Spayed_Neutered = Spayed_Neutered;
}

void Cow::Set_Registration_ID(string Registration_ID)
{
	this -> Registration_ID = Registration_ID;
}

void Cow::Set_Other_Comments(string Other_Comments)
{
	 this -> Other_Comments = Other_Comments;
}


//Getters
string Cow::Get_Breed() const
{
	return Breed;
}

string Cow::Get_Spayed_Neutered() const
{
	return Spayed_Neutered;
}

string Cow::Get_Registration_ID() const
{
	return Registration_ID;
}

string Cow::Get_Other_Comments() const
{
	return Other_Comments;
}


























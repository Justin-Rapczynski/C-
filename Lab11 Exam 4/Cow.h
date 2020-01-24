#ifndef COW_H
#define COW_H

#include <iostream>
#include <vector>

#include "Animal.h"

using namespace std;

class Cow : public Animal
{
	public:

		void PrintInfo();

		Cow();	//Default Constructor
		Cow(string Breed, string Spayed_Neutered, string Registration_ID, string Other_Comments);

		//Setters
		void Set_Breed(string Breed);
		void Set_Spayed_Neutered(string Spayed_Neutered);
		void Set_Registration_ID(string Registration_ID);
		void Set_Other_Comments(string Other_Comments);

		//Getters
		string Get_Breed() const;
		string Get_Spayed_Neutered() const;
		string Get_Registration_ID() const;
		string Get_Other_Comments() const;


	private:
		string Breed;
		string Spayed_Neutered;
		string Registration_ID;
		string Other_Comments;

};

#endif

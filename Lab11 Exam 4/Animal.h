#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

using namespace std;

class Animal
{
	public:

		virtual void PrintInfo();

		Animal();	// Default Constructor
		Animal(int Weight, string Name, string Gender, string Color_Desc);	// Overloaded Constructor

		//Setters
		void Set_Weight(int Weight);
		void Set_Name(string Name);
		void Set_Gender(string Gender);
		void Set_Color_Desc(string Color_Desc);

		//Getters
		int Get_Weight() const;
		string Get_Name() const;
		string Get_Gender() const;
		string Get_Color_Desc() const;

	private:
		int Weight;
		string Name;
		string Gender;
		string Color_Desc;
};

#endif

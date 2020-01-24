#include <iostream>
#include <string>
#include <vector>
#include <list>

#include "Animal.h"
#include "Cow.h"

using namespace std;

int main()
{

	const int SIZE = 5;

	Animal* AnimalPtr;
	Cow* CowPtr;

	//Pointer Vector
	vector <Animal*> AnimalList(SIZE);

	//Temporary Variables
	string Temp_Breed;
	int Temp_Weight;
	string Temp_Name;
	string Temp_Gender;
	string Temp_Spayed_Neutered;
	string Temp_Registration_ID;
	string Temp_Color_Desc;
	string Temp_Other_Comments;

	for(int i = 0; i < AnimalList.size(); i++)
	{
		AnimalPtr = new Animal;
        	CowPtr = new Cow;

		cout << "PRESS ENTER" << endl;
		cin.ignore();

		//1
		cout << "Enter Breed" << endl;
		cout << ">> ";
		getline(cin, Temp_Breed);
		CowPtr -> Set_Breed(Temp_Breed);

		//2
		cout << "Enter Weight" << endl;
		cout << ">> ";
		cin >> Temp_Weight;
		AnimalPtr -> Set_Weight(Temp_Weight);
		cin.ignore();

		//3
		cout << "Enter Name" << endl;
		cout << ">> ";
		getline(cin, Temp_Name);
		AnimalPtr -> Set_Name(Temp_Name);

		//4
		cout << "Enter Gender" << endl;
		cout << ">> ";
		getline(cin, Temp_Gender);
		AnimalPtr -> Set_Gender(Temp_Gender);

		//5
		cout << "Enter Spayed or Neutered (Yes / No)" << endl;
		cout << ">> ";
		getline(cin, Temp_Spayed_Neutered);
		CowPtr -> Set_Spayed_Neutered(Temp_Spayed_Neutered);

		//6
		cout << "Enter Registration ID" << endl;
		cout << ">> ";
		getline(cin, Temp_Registration_ID);
		CowPtr -> Set_Registration_ID(Temp_Registration_ID);

		//7
		cout << "Enter Color Description" << endl;
		cout << ">> ";
		getline(cin, Temp_Color_Desc);
		AnimalPtr -> Set_Color_Desc(Temp_Color_Desc);

		//8
		cout << "Enter Other Comments" << endl;
		cout << ">> ";
		getline(cin, Temp_Other_Comments);
		CowPtr -> Set_Other_Comments(Temp_Other_Comments);


		AnimalList.push_back(AnimalPtr);
		AnimalList.push_back(CowPtr);

	}


	/*
	vector <Animal*>::iterator iter;
	for(iter = AnimalList.begin(); iter != AnimalList.end(); iter++)
	{
		AnimalList.*iter -> PrintInfo();
	}
	*/

	for(int i = 0; i < AnimalList.size(); i++)
	{
		AnimalList.at(i) -> PrintInfo();
	}


	return 0;


	for(int i = 0; i < AnimalList.size(); i++)
	{
		delete AnimalPtr;
		delete CowPtr;
		AnimalList.clear();
	}

}

#include <iostream>
#include <vector>
#include <string>

#include "Snake.h"

using namespace std;

int main()
{
	const int SIZE = 5;
	vector <Snake> Snake_List(SIZE);

	int i;

	string Temp_Breed;
        double Temp_Weight;
        string Temp_Name;
        string Temp_Gender;
        double Temp_Length;
        string Temp_Fav_Food;
        string Temp_Color_Desc;
        string Temp_Other_Comments;

	for(i = 0; i < Snake_List.size(); i++)
	{

		cout << "PRESS ENTER" << endl;
		cin.ignore();

		cout << "Please enter the Snake's Breed" << endl;
		cout << ">> ";
		getline(cin, Temp_Breed);

		cout << "Please enter the Weight of the Snake" << endl;
		cout << ">> ";
		cin >> Temp_Weight;
		cin.ignore();

		cout << "Please enter the Name of the Snake" << endl;
		cout << ">> ";
		getline(cin, Temp_Name);

		cout << "Please enter the gender of the Snake" << endl;
		cout << ">> ";
		getline(cin, Temp_Gender);

		cout << "Please enter the Length of the Snake" << endl;
		cout << ">> ";
		cin >> Temp_Length;
		cin.ignore();

		cout << "Please enter the Snake's Favorite Food" << endl;
		cout << ">> ";
		getline(cin, Temp_Fav_Food);

		cout << "Please enter the Color Description of the Snake" << endl;
		cout << ">> ";
		getline(cin, Temp_Color_Desc);

		cout << "Please enter any Other Comments about the Snake" << endl;
		cout << ">> ";
		getline(cin, Temp_Other_Comments);



		Snake_List.at(i).Set_Breed(Temp_Breed);
                Snake_List.at(i).Set_Weight(Temp_Weight);
                Snake_List.at(i).Set_Name(Temp_Name);
                Snake_List.at(i).Set_Gender(Temp_Gender);
                Snake_List.at(i).Set_Length(Temp_Length);
                Snake_List.at(i).Set_Fav_Food(Temp_Fav_Food);
                Snake_List.at(i).Set_Color_Desc(Temp_Color_Desc);
                Snake_List.at(i).Set_Other_Comments(Temp_Other_Comments);



	}


	for (int i = 0; i < Snake_List.size(); i++)
	{
       	    Snake_List.at(i).PrintInfo(i);
	}


	return 0;
}

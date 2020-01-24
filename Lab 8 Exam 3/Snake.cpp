#include <iostream>
#include <vector>

#include "Snake.h"

using namespace std;

Snake::Snake()
{
	Breed = "No Breed";
	Weight = 0;
	Name = "No Name";
	Gender = "No Gender";
	Length = 0;
	Fav_Food = "No Favorite Food";
	Color_Desc = "No Color Description";
	Other_Comments = "No Other Comments";

}

Snake::Snake(string Breed, double Weight, string Name, string Gender, double Length, string Fav_Food, string Color_Desc, string Other_Comments)
{
	this -> Breed = Breed;
	this -> Weight = Weight;
	this -> Name = Name;
	this -> Gender = Gender;
	this -> Length = Length;
	this -> Fav_Food = Fav_Food;
	this -> Color_Desc = Color_Desc;
	this -> Other_Comments = Other_Comments;

}

//Setters
void Snake::Set_Breed(string Breed)
{
	this -> Breed = Breed;
}
void Snake::Set_Weight(double Weight)
{
	this -> Weight = Weight;
}
void Snake::Set_Name(string Name)
{
	this -> Name = Name;
}
void Snake::Set_Gender(string Gender)
{
	this -> Gender = Gender;
}
void Snake::Set_Length(double Length)
{
	this -> Length = Length;
}
void Snake::Set_Fav_Food(string Fav_Food)
{
	this -> Fav_Food = Fav_Food;
}
void Snake::Set_Color_Desc(string Color_Desc)
{
	this -> Color_Desc = Color_Desc;
}
void Snake::Set_Other_Comments(string Other_Comments)
{
	this -> Other_Comments = Other_Comments;
}

//Getters
string Snake::Get_Breed()const
{
	return Breed;
}
double Snake::Get_Weight()const
{
	return Weight;
}
string Snake::Get_Name()const
{
	return Name;
}
string Snake::Get_Gender()const
{
	return Gender;
}
double Snake::Get_Length()const
{
	return Length;
}
string Snake::Get_Fav_Food()const
{
	return Fav_Food;
}
string Snake::Get_Color_Desc()const
{
	return Color_Desc;
}
string Snake::Get_Other_Comments()const
{
	return Other_Comments;
}


void Snake::PrintInfo(int Num)
{
	cout << "Snake: " << Num+1 << endl;
	cout << "Breed: " << Get_Breed() << endl;
	cout << "Weight: " << Get_Weight() << endl;
	cout << "Name: " << Get_Name() << endl;
	cout << "Gender: " << Get_Gender() << endl;
	cout << "Length: " << Get_Length() << endl;
	cout << "Favorite Food: " << Get_Fav_Food() << endl;
	cout << "Color Description: " << Get_Color_Desc() << endl;
	cout << "Other Comments: " << Get_Other_Comments() << endl;
}

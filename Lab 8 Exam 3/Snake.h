#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Snake
{
	private:
		string Breed;
		double Weight;
		string Name;
		string Gender;
		double Length;
		string Fav_Food;
		string Color_Desc;
		string Other_Comments;

	public:
		Snake();
		Snake(string Breed, double Weight, string Name, string Gender, double Length, string Fav_Food, string Color_Desc, string Other_Comments);

		//Setters
		void Set_Breed(string Breed);
		void Set_Weight(double Weight);
		void Set_Name(string Name);
		void Set_Gender(string Gender);
		void Set_Length(double Length);
		void Set_Fav_Food(string Fav_Food);
		void Set_Color_Desc(string Color_Desc);
		void Set_Other_Comments(string Other_Comments);

		string Get_Breed()const;
                double Get_Weight()const;
                string Get_Name()const;
                string Get_Gender()const;
                double Get_Length()const;
                string Get_Fav_Food()const;
                string Get_Color_Desc()const;
                string Get_Other_Comments()const;

		void PrintInfo(int Num);
};

// Projekt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream d;
	ofstream a;
	ofstream i;
	int b;
	string c;
	int o = 1;
	
	
	cout << "Vytajte v databaze ziakov." << endl;
	a.open("ziaci1.txt");
	a << "1Simon_Blazek" << endl;
	a << "2Tomas_Cicman" << endl;
	a << "3Frantisek_Findura" << endl;
	a << "4Tomas_Fojtik" << endl;
	a << "5Michal_Franc" << endl;
	a << "6Denis_Hascik" << endl;
	a << "7Martin_Kubista" << endl;
	a << "8Marek_Kulla" << endl;
	a << "9Adrian_Liba" << endl;
	a << ".Kristian_Mazur" << endl;
	a << "<Marek_Michal" << endl;
	a << ">Nicolas_Repan" << endl;
	a << "-Daniel_Simek" << endl;
	a << "_Samuel_Vnuk" << endl;
	a.close();
	
}



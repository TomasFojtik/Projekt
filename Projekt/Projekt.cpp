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
	a << "/ziak_s_tymto_poradovym_cislom_nie_je_v_databaze!" << endl;
	a << "*ziak_s_poradovym_cislom_0_neexistuje!" << endl;
	a.close();
	while (o == 1)
	{
		cout << "Zadaj poradove cislo ziaka aby program nasiel jeho meno v databaze." << endl;
		cin >> b;
		d.open("ziaci1.txt");

		if (b == 1) {
			d.ignore(999, '1');
			d >> c;
		}
		else if (b == 2) {
			d.ignore(999, '2');
			d >> c;

		}
		else if (b == 3) {
			d.ignore(999, '3');
			d >> c;

		}
		else if (b == 4) {
			d.ignore(999, '4');
			d >> c;

		}
		else if (b == 5) {
			d.ignore(999, '5');
			d >> c;

		}
		else if (b == 6) {
			d.ignore(999, '6');
			d >> c;

		}
		else if (b == 7) {
			d.ignore(999, '7');
			d >> c;

		}
		else if (b == 8) {
			d.ignore(999, '8');
			d >> c;

		}
		else if (b == 9) {
			d.ignore(999, '9');
			d >> c;

		}
		else if (b == 10) {
			d.ignore(999, '.');
			d >> c;

		}
		else if (b == 11) {
			d.ignore(999, '<');
			d >> c;

		}
		else if (b == 12) {
			d.ignore(999, '>');
			d >> c;

		}
		else if (b == 13) {
			d.ignore(999, '-');
			d >> c;

		}
		else if (b == 14) {
			d.ignore(999, '_');
			d >> c;

		}
		else if (b > 14) {
			d.ignore(999, '/');
			d >> c;
			
		}

		else if (b == 0) {
			d.ignore(999,'*');
			d >> c;
			
		}
		d.close();
		cout << "Vyhladal som ziaka v databaze, jeho meno najdete v subore ziak.txt" << endl;

		i.open("ziak.txt");
		i << c;
		i.close();
		cout << "Chcete este vyhladat meno ziaka v databaze ? Ak ano zadajte 1." << endl;
		cin >> o;
	}
	cout << "Dakujem za pouzitie databazy ziakov." << endl;
	return 0;
}



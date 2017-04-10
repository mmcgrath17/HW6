#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include "Circle.h"
#include "Complex.h"

using namespace std;

int main()
{
//ex_01
	srand (time(NULL));
	ofstream fin;
	fin.open("Exercise13_1.txt");
	if (fin.fail())
	{
		cout << "File cannot be opened." << endl;
		return 0;
	}
	else
	{
		fin.open("Excercise13_1.txt", ios::app);
		for (int i = 0; i < 100; i++)
		{

			fin << (rand() % 100) << " ";
		}
	}
	fin.close();

//ex_02
	fstream fil;
	cout << "Enter a file name.";
	string name;
	cin >> name;
	fil.open(name, ios::out);
	int count = 0;

	if (fil.fail())
	{
		cout << "File name not found./n";
			return 0;
	}
	else
	{
		string line;
		while (getline(fil, line))
		{
			for (int i = 0; i < line.size(); i++)
			{
				if (line.at(i) != ' ')
				{
					count++;
				}
			}
		}
	}

//ex_03
	fstream nam;
	nam.open("Babynames.txt, ios::out");
	cout << "\nEnter a year, then a gender(M/F), then a name in that order.\n";
	int year;
	char gender;
	string n;
	string lin;
	string number = "";

	if (nam.fail())
	{
		cout << "Failed to open file.\n";
		return 0;
	}
	else while (getline(nam, lin))
	{
		if (lin.find(n))
		{
			char space = ' ';
			int position = lin.rfind(n) + 1;
			while (lin.at(position) != space)
			{
					//number.append(lin.at(position));
					position++;
			}

		}		
	}

	//ex_05
	double x, y;
	cout << "The first complex number is: ";
	cin >> x >> y;
	Complex c1 = Complex(x, y);
	cout << "\nThe second complex number is: ";
	cin >> x >> y;
	Complex c2 = Complex(x, y);
	cout << "(" << c1.getRealPart() << " + " << c1.getImaginaryPart() << "i)" << " + " << "(" << c2.getRealPart() << " + " << c2.getImaginaryPart() << "i)" << " = (" << (c1 + c2).getRealPart << " + " << (c1 + c2).getImaginaryPart() << "i)" << endl;
	cout << "(" << c1.getRealPart() << " + " << c1.getImaginaryPart() << "i)" << " - " << "(" << c2.getRealPart() << " + " << c2.getImaginaryPart() << "i)" << " = (" << (c1 - c2).getRealPart << " + " << (c1 + c2).getImaginaryPart() << "i)" << endl;
	cout << "(" << c1.getRealPart() << " + " << c1.getImaginaryPart() << "i)" << " * " << "(" << c2.getRealPart() << " + " << c2.getImaginaryPart() << "i)" << " = (" << (c1 * c2).getRealPart << " + " << (c1 + c2).getImaginaryPart() << "i)" << endl;
	cout << "(" << c1.getRealPart() << " + " << c1.getImaginaryPart() << "i)" << " / " << "(" << c2.getRealPart() << " + " << c2.getImaginaryPart() << "i)" << " = (" << (c1 / c2).getRealPart << " + " << (c1 + c2).getImaginaryPart() << "i)" << endl;

	cout << "|" << "(" << c1.getRealPart() << " + " << c1.getImaginaryPart() << "| = " << pow(c1.getRealPart(), 2) + pow(c1.getImaginaryPart(), 2);
		 



}
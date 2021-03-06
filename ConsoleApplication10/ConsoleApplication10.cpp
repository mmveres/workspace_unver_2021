// ConsoleApplication10.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include "ConsoleApplication10.h"
using namespace std;

int menu();
int main()
{
	setlocale(LC_ALL, "Russian");
	while (true)
	{
	int answer = menu();
	switch (answer)
	{
	case 0: read_from_file(); break;
	case 1: write_to_file(); break;
	case 2: read_employee_from_file(); break;
	case 3: write_employee_to_file(); break;
	}
	system("pause");
	}
	
	return 0;
}

int menu() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 4) % 4;
		if (key == 0) cout << "-> read double from file." << endl;
		else  cout << "   read double from file." << endl;
		if (key == 1) cout << "-> write double to file." << endl;
		else  cout << "   write double to file." << endl;
		if (key == 2) cout << "-> read struct employee from file." << endl;
		else  cout << "   read struct employee from file." << endl;
		if (key == 3) cout << "-> write struct employee from file." << endl;
		else  cout << "   write struct employee from file." << endl;
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}


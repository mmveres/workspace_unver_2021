// ConsoleApplication03.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "SourceLib.h"
#include "ConsoleApplication03.h"
using namespace std;


int main()
{
	cout << "Enter value  : " << endl;
	char value[100];
	cin >> value;
	for (int i = 0; i < 100; i++) {
		if (value[i] == '\0') break;
		if (value[i] >= 48 && value[i] <= 57)
			cout << value[i];
		else{
			cerr << "error not int";
			break;
		}
	}
	//cin >> value;
	//cout << value;
	//cin >> value;
	//cout << value;
	return 0;
}

int testFunc()
{
	while (true)
	{
		int start(0), end(0);


		cout << "Enter value start, end : " << endl;
		cin >> start >> end;



		cout << "1. print_value_from_range" << endl;
		cout << "2. print_decrement_value_from_range" << endl;
		cout << "0. exit" << endl;
		int answer = 0;
		cin >> answer;
		switch (answer)
		{
		case 1:print_value_from_range(start, end); break;
		case 2:print_decrement_value_from_range(); break;
		case 0: return 0;
		default: return -1;

		}
	}
}




// ConsoleApplication4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{
	print_cyfra_of_value(789);
	print_cyfra_of_value(147);
	print_cyfra_of_value(234);
	print_cyfra_of_value(876);
	int count_of_value = 0;
	int averageOfArray = 0;
	return 0;
}

void print_cyfra_of_value_123() {
		int value = 123;
		int value1 = 123 / 10;
		int value2 = value1 / 10;
		int value11 = value % 10;
		int value12 = value1 % 10;
		cout << value2 << " : " << value12 << " : " << value11 << endl;
	}

void print_cyfra_of_value_456() {
	int value = 456;
	int value1 = value / 10;
	int value2 = value1 / 10;
	int value11 = value % 10;
	int value12 = value1 % 10;
	cout << value2 << " : " << value12 << " : " << value11 << endl;
}
void print_cyfra_of_value(int value) {	
	int value1 = value / 10;
	int value2 = value1 / 10;
	int value11 = value % 10;
	int value12 = value1 % 10;
	cout << value2 << " : " << value12 << " : " << value11 << endl;
}
void task_integer_01() {
}

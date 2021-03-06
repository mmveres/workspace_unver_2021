// ConsoleApplication02.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

void equal_float_value();

int task_find_max(int x1, int x2, int x3, int x4);

int task2_count_max(int x1, int x2, int x3, int x4);

int find_max(int a, int b) {
	if (a > b) return a;
	else return b;
}

int main()
{
	int x1(1), x2(3), x3(2), x4(3);	
	while (true)
	{	
	cout << "1. Find max" << endl;
	cout << "2. Find count max" << endl;
	cout << "0. Exit" << endl;
	int choice = 0;
	cin >> choice;
	switch (choice)
	{
	case 0: return 0;
	case 1: {
	
		cout << task_find_max( x1, x2, x3, x4);
		
	}
	case 2: {
	
		cout<< task2_count_max(x1, x2, x3, x4);
		
	}
	default: cout << "error"; break;
	}

}

	return 0;
}

int task2_count_max( int x1, int x2, int x3, int x4)
{
	
	int max_x = task_find_max(x1, x2, x3, x4);
	int count_max = 0;
	if (max_x == x1) count_max++;
	if (max_x == x2) count_max++;
	if (max_x == x3) count_max++;
	if (max_x == x4) count_max++;
	return count_max;
	
}

int task_find_max( int x1, int x2, int x3, int x4)
{
	return find_max(find_max(x1, x2), find_max(x3, x4));	
}

void equal_float_value()
{
	float x1 = 1.00001;
	float x2 = 1.00002;
	float eps = 0.01;
	bool is_equal = abs(x1 - x2) < eps;
	cout << (is_equal);
}


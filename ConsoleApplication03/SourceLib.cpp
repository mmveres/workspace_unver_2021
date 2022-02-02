#include "stdafx.h"
#include <iostream>
#include "SourceLib.h"
using namespace std;


void print_value_from_range(int start, int end) {
	{
		int i = start;
		while (i < end) {
			cout << i << endl;
			i++;
		}
	}
}

void print_decrement_value_from_range()
{
	{
		int i = 200;
		while (i > 50) {
			cout << i << endl;
			printf("i= %d\n", i);

			i--;
		}
	}
}
// ConsoleApplication04.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "taskLib.h"
using namespace std;

int main()

{
	float Xbegin, Xend, dx;
	float a = 1, b = 2, c = 3;
	cout << "Enter Xbegin and Xend and dx(step):";
	cin >> Xbegin >> Xend >> dx;

	float x = Xbegin;
	float f = 0;
//	for(float x = Xbegin; x <= Xend; x += dx)
	while (x <= Xend) {
		if (c < 0 && x != 0) {
			f = (-a) * x - c ;
		}
		else {
			if (c > 0 && x == 0) {
				f = (x - a) / (-c) ;
			}
			else {
				if (c - a != 0)
					f = (b * x) / (c - a);
				else
					cerr << "Divide zero";
			}
		}
		x += dx;
		int ac = (int)a;
		int bc = (int)b;
		int cc = (int)c;
		if((ac & cc) | (bc & cc) == 0)
			cout <<"x = "<<x << " f(x)= " << f << endl;
		else
			cout << "x = " << x << " f(x)= " <<(int)f << endl;
	}
    return 0;
}


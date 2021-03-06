// ConsoleApplication05.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
//using namespace std;
namespace int_task {
	void fmax(double x, double y) {
		std::cout << x + y;
	}
}

void swap( int const* px, const int* py) {
int t = *px;
	*px = *py;
	*py = t;	
	px = &t;
}

void swap_ref(int& x, int& y) {
	int t = x;
	x = y;
	y = t;	
}

int main()
{
	int x = 1;
	int y = 2;

	int* px = &x;
	int* py = &y;
	

	std::cout << "x = " << x << " adr = "<<&x<<" px= "<<px<< " *(px) = "<< *(px)<<std::endl;
//	swap(px, py);
	swap(&x, &y);
	

	std::cout << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl;
	
	swap_ref(x, y);

	std::cout << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl;
	return 0;
}


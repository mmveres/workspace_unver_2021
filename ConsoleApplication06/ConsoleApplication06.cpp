// ConsoleApplication06.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
typedef unsigned int index_type;

int main()
{
	const int SIZE_ARR = 4;

	int arr[SIZE_ARR];

	//int n;
	//std::cin >> n;
	//int *parr = new int[n];
	//delete[] parr;
	//n = 10;
	int count_odd = 0;
	size_t i = 0;
	while (count_odd < SIZE_ARR)
	{
		std::cout << "enter value " << i << std::endl;
		int x;
		std::cin >> x;
		if (x % 2 == 1 && x>0){
			arr[count_odd] = x;
			count_odd++;
			std::cout << "count_odd =" << count_odd << std::endl;
		}
		else
			arr[i] = 0;
		i++;
	}

	for (size_t i = 0; i < SIZE_ARR; i++)
	{
		std::cout << arr[i]<<", ";
	}
    return 0;
}


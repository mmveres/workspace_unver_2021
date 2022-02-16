// ConsoleApplication12.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "ConsoleApplication12.h"

template <typename T>
T* sort(T  mas[5])
{
	T* arr = new T[5];
	for (size_t i = 0; i < 5; i++)
	{
		arr[i] = mas[i];
	}
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5 - 1 - i; j++)
		{
			if (arr[j]> arr[j + 1]) {
				T t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
	return arr;
}

int main()
{
	float arr[] = { 10,2,13,4,5};
	float* sarr = sort(arr);
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << sarr[i] << ", ";
	}
	std::cout << std::endl;
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << arr[i] << ", ";
	}
    return 0;
	delete sarr;
}


// ConsoleApplication07.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
	const int N = 3;
	const int M = 4;
using namespace std;
void testStr() {
char text[100];
/*	cout << "Enter value";
	//	cin >> text;
	cin.getline(text, sizeof(text));
	//	gets_s(text, sizeof(text));
	cout << text;
	{
		ofstream text_file("text.txt");
		text_file << text;
		text_file.close();
	}*/
	{
		ifstream text_file("text.txt");
	//	text_file >> text;
		while (!text_file.eof())
		{
	//	text_file.getline(text, sizeof(text));		
		text_file >> text;
		cout << text <<endl;
		}
		text_file.close();
		




	}
}

void printMatrixStatic(int matrix[N][M]) {
	for (size_t i = 0; i < N; i++)
	{
		for (size_t j = 0; j < M; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}

void printMatrix(int **matrix , int N , int M) {
for (size_t i = 0; i < N; i++)
	{
		for (size_t j = 0; j < M; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}

void generateMatrix(int **matrix, int N, int M) {
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			matrix[i][j] = i*j;
		}		
	}
}

int* matrixToArray(int **matrix, int N, int M) {
	int * arr = new int[N*M];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			arr[j+i*M]=matrix[i][j];
		}
	}
	return arr;
}

int main()
{

	int matrixStatic[N][M] = { 
		{1,2,3,4},
		{5,6,7,8},
		{1,2,3,1} };

	int elemsMatrix[N][M] = { 1,2,3,4 , 5,6,7,8 , 1,2,3,1 };
	int elemsVector[N*M] = { 1,2,3,4 , 5,6,7,8 , 1,2,3,1 };

	printMatrixStatic(matrixStatic);

	int n = 10;
	int m = 10;
	int** matrix = new int*[n];
	for (size_t i = 0; i < n; i++)	
		matrix[i] = new int[m];	
	generateMatrix(matrix, n, m);
	printMatrix(matrix, n, m);
	int* arr = matrixToArray(matrix,n, m);
	for (size_t i = 0; i < n*m; i++)
	{
		cout << arr[i]<<", ";
	}
	for (size_t i = 0; i < n; i++)
		delete []matrix[i];
	delete []matrix;



	return 0;
}


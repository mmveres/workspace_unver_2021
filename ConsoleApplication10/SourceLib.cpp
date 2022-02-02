#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include "ConsoleApplication10.h"
using namespace std;

void read_from_file()
{
	setlocale(LC_ALL, "RUS");
	int n, i;
	double *a;
	FILE *f; //описываем файловую переменную
			 //открываем существующий двоичный файл в режиме чтения
#pragma warning(suppress : 4996)
	f = fopen("noobs.dat", "rb");
	//считываем из файла одно целое число в переменную n
	fread(&n, sizeof(int), 1, f);
	//вывод n на экран
	cout << "n = " << n << endl;
	//выделение памяти для массива из n чисел
	a = new double[n];
	//чтение n вещественных чисел из файла в массив a
	fread(a, sizeof(double), n, f);
	//вывод массива на экран
	for (i = 0; i<n; i++)
		cout << a[i] << "\t";
	cout << endl;
	//закрываем файл
	fclose(f);
}
void read_employee_from_file()
{
	setlocale(LC_ALL, "RUS");
	int n, i;
	double *a;
	FILE *f; //описываем файловую переменную
			 //открываем существующий двоичный файл в режиме чтения
#pragma warning(suppress : 4996)
	f = fopen("noobs.dat", "rb");
	//считываем из файла одно целое число в переменную n
	fread(&n, sizeof(int), 1, f);
	//вывод n на экран
	cout << "n = " << n << endl;
	//выделение памяти для массива из n чисел
	employee* workers = new employee[n];
	//чтение n вещественных чисел из файла в массив a
	fread(workers, sizeof(employee), n, f);
	//вывод массива на экран
	for (i = 0; i<n; i++)
		cout << workers[i].name << workers[i].age << workers[i].salary << "\t";
	cout << endl;
	//закрываем файл
	fclose(f);
}

void write_to_file()
{
	setlocale(LC_ALL, "RUS");
	int n, i;
	double a;
	FILE *f; //описываем файловую переменную
			 //создаем двоичный файл в режиме записи
#pragma warning(suppress : 4996)
	f = fopen("noobs.dat", "wb");
	//ввод числа n
	cout << "n = "; cin >> n;
	fwrite(&n, sizeof(int), 1, f);
	//цикл для ввода n вещественных чисел
	for (i = 0; i<n; i++)
	{
		//ввод очередного вещественного числа
		cout << "a = ";
		cin >> a;
		//запись вешественного числа в двоичный файл
		fwrite(&a, sizeof(double), 1, f);
	}
	//закрываем файл
	fclose(f);
}

void write_employee_to_file()
{
	setlocale(LC_ALL, "RUS");
	int n, i;
	double a;
	FILE *f; //описываем файловую переменную
			 //создаем двоичный файл в режиме записи
#pragma warning(suppress : 4996)
	f = fopen("noobs.dat", "wb");
	//ввод числа n
	cout << "n = "; cin >> n;
	fwrite(&n, sizeof(int), 1, f);
	//цикл для ввода n вещественных чисел
	employee worker;
	for (i = 0; i<n; i++)
	{
		//ввод очередного вещественного числа
		cout << "name = ";
		cin >> worker.name;
		cout << "age = ";
		cin >> worker.age;
		cout << "salary = ";
		cin >> worker.salary;
		//запись вешественного числа в двоичный файл
		fwrite(&worker, sizeof(employee), 1, f);
	}
	//закрываем файл
	fclose(f);
}
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
	FILE *f; //��������� �������� ����������
			 //��������� ������������ �������� ���� � ������ ������
#pragma warning(suppress : 4996)
	f = fopen("noobs.dat", "rb");
	//��������� �� ����� ���� ����� ����� � ���������� n
	fread(&n, sizeof(int), 1, f);
	//����� n �� �����
	cout << "n = " << n << endl;
	//��������� ������ ��� ������� �� n �����
	a = new double[n];
	//������ n ������������ ����� �� ����� � ������ a
	fread(a, sizeof(double), n, f);
	//����� ������� �� �����
	for (i = 0; i<n; i++)
		cout << a[i] << "\t";
	cout << endl;
	//��������� ����
	fclose(f);
}
void read_employee_from_file()
{
	setlocale(LC_ALL, "RUS");
	int n, i;
	double *a;
	FILE *f; //��������� �������� ����������
			 //��������� ������������ �������� ���� � ������ ������
#pragma warning(suppress : 4996)
	f = fopen("noobs.dat", "rb");
	//��������� �� ����� ���� ����� ����� � ���������� n
	fread(&n, sizeof(int), 1, f);
	//����� n �� �����
	cout << "n = " << n << endl;
	//��������� ������ ��� ������� �� n �����
	employee* workers = new employee[n];
	//������ n ������������ ����� �� ����� � ������ a
	fread(workers, sizeof(employee), n, f);
	//����� ������� �� �����
	for (i = 0; i<n; i++)
		cout << workers[i].name << workers[i].age << workers[i].salary << "\t";
	cout << endl;
	//��������� ����
	fclose(f);
}

void write_to_file()
{
	setlocale(LC_ALL, "RUS");
	int n, i;
	double a;
	FILE *f; //��������� �������� ����������
			 //������� �������� ���� � ������ ������
#pragma warning(suppress : 4996)
	f = fopen("noobs.dat", "wb");
	//���� ����� n
	cout << "n = "; cin >> n;
	fwrite(&n, sizeof(int), 1, f);
	//���� ��� ����� n ������������ �����
	for (i = 0; i<n; i++)
	{
		//���� ���������� ������������� �����
		cout << "a = ";
		cin >> a;
		//������ ������������� ����� � �������� ����
		fwrite(&a, sizeof(double), 1, f);
	}
	//��������� ����
	fclose(f);
}

void write_employee_to_file()
{
	setlocale(LC_ALL, "RUS");
	int n, i;
	double a;
	FILE *f; //��������� �������� ����������
			 //������� �������� ���� � ������ ������
#pragma warning(suppress : 4996)
	f = fopen("noobs.dat", "wb");
	//���� ����� n
	cout << "n = "; cin >> n;
	fwrite(&n, sizeof(int), 1, f);
	//���� ��� ����� n ������������ �����
	employee worker;
	for (i = 0; i<n; i++)
	{
		//���� ���������� ������������� �����
		cout << "name = ";
		cin >> worker.name;
		cout << "age = ";
		cin >> worker.age;
		cout << "salary = ";
		cin >> worker.salary;
		//������ ������������� ����� � �������� ����
		fwrite(&worker, sizeof(employee), 1, f);
	}
	//��������� ����
	fclose(f);
}
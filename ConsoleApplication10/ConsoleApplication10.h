#pragma once

struct employee
{
	char name[64];
	int age;
	float salary;
};

void write_employee_to_file();
void read_employee_from_file();


void write_to_file();

void read_from_file();

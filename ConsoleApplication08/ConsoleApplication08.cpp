// ConsoleApplication08.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "ConsoleApplication08.h"
using namespace std;
void test2Note() {
Note n1;
	strcpy_s(n1.name, "aaa");
	strcpy_s(n1.phone, "111");
	n1.date[0] = 1;
	n1.date[1] = 1;
	n1.date[2] = 1;
	print_note(n1);
	Note n2;
	n2 = n1;
	strcpy_s(n2.name, "bbb");
	print_note(n2);
	print_note(n1);

}

int main()
{
	
	Note notes[3];	
	createNoteArray(notes);
	printNoteArray(notes);


    return 0;
}

void findNoteArrayByPhone(Note notes[], char phone[20])
{
	for (size_t j = 0; j < sizeof(notes) / sizeof(Note); j++)
	{
		if (strcmp(notes[j].phone, phone))
			print_note(notes[j]);
	}
}

void printNoteArray(Note notes[])
{
	for (size_t j = 0; j < sizeof(notes) / sizeof(Note); j++)
	{
		print_note(notes[j]);

	}
}

void createNoteArray(Note notes[])
{
	for (size_t i = 0; i < sizeof(notes) / sizeof(Note); i++)
	{
		create_note(notes[i]);
	}
}

void print_note(Note &note) {
		cout << note.name<<endl;
		cout << note.phone << endl;
		for (size_t i = 0; i <  sizeof(note.date) / sizeof(int); i++)
		{
			cout << note.date[i]<<"-";
		}
		cout << endl;
}

void create_note(Note &note)
{
	
	cout << "Enter name";
	cin >> note.name;
	cout << "Enter phone";
	cin >> note.phone;
	cout << "Enter date";
	for (size_t i = 0; i < sizeof(note.date) / sizeof(int); i++)
	{
		cin >> note.date[i];
	}
}


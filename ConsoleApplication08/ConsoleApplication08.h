#pragma once
struct Note
{
	char name[20];
	char phone[20];
	int date[3];
};

struct NoteArray {
	Note notes[3];	

};

void create_note(Note &note);
void print_note(Note &note);

void createNoteArray(Note notes[]);

void printNoteArray(Note notes[]);

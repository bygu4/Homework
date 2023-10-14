#pragma once
#include <string.h>

#define MAX_NOTES 100
#define SIZE_OF_BUFFER 64
#define SUCCESS 0
#define BAD_ALLOCATION 1
#define FILE_NOT_FOUND 2
#define TOO_MUCH_NOTES 3

typedef struct {
    char* name;
    char* number;
} Note;

typedef struct {
    Note* notes;
    size_t numberOfNotes;
} Phonebook;

// ���������� ������, ���������� ��� ���������� �����. �������� ����� �������
void freePhonebook(Phonebook* const phonebook);

// ��������������� ������� ��� ���������� ������, ����� ��� ������
int addNoteSupport(Phonebook* const phonebook, const char* const name, const char* const number);

// ���������� ������ ��� ������ � �������������
int addNote(Phonebook* const phonebook);

// ������ ����� � ������ �� �����. ��������� ������: ��� �����
int readNotesFromFile(Phonebook* const phonebook, const char* const nameOfFile);

// ��������������� ������� ��� ���������� ������� � ����, ����� ��� ������
// ������: ��� �����
int saveNotesToFileSupport(const Phonebook* const phonebook, const char* const nameOfFile);

// ���������� ������� � ���� ��� ������ � �������������
int saveNotesToFile(const Phonebook* const phonebook, const char* const nameOfFile);

// ������� � ������� ��� ��������� ������
void printAllNotes(const Phonebook* const phonebook);

// ��������������� ������� ��� ������ ������ �� �����, ����� ��� ������
char* findNumberByNameSupport(const Phonebook* const phonebook, const char* const nameToFind);

// ����� ������ �� ����� ��� ������ � �������������
void findNumberByName(const Phonebook* const phonebook);

// ��������������� ������� ��� ������ ����� �� ������, ����� ��� ������
char* findNameByNumberSupport(const Phonebook* const phonebook, const char* const numberToFind);

// ����� ����� �� ������ ��� ������ � �������������
void findNameByNumber(const Phonebook* const phonebook);

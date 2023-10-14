#pragma once
#include "phonebook.h"

// ���������� ������ ��� ������ � �������������. ���������� ��� ������
int addNoteUI(Phonebook* const phonebook);

// ���������� ������� � ���� ��� ������ � �������������. ���������� ��� ������
int saveNotesToFileUI(const Phonebook* const phonebook, const char* const nameOfFile);

// ������� � ������� ��� ��������� ������
void printAllNotes(const Phonebook* const phonebook);

// ����� ������ �� ����� ��� ������ � �������������
void findNumberByNameUI(const Phonebook* const phonebook);

// ����� ����� �� ������ ��� ������ � �������������
void findNameByNumberUI(const Phonebook* const phonebook);

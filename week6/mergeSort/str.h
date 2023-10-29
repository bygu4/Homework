#pragma once
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define SUCCESS 0
#define BAD_ALLOCATION 1

// ������������ �����. ���������� �� ��������� ��� ������
char* stringSum(int* const errorCode, const size_t numberOfSources, ...);

// ���������� ������ �� �����. ���������� �� ��������� ��� ������
char* fgetString(FILE* const inputFile, const char breakPoint, int* const errorCode);

// �������� ����� �� ���������
bool stringsAreEqual(const char* const string1, const char* const string2);

// ��������� �����. ���������� false, ���� ������ ������ ������ ������, ����� true
bool compareStrings(const char* const string1, const char* const string2);

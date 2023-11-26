#pragma once
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// �������� ����� ������
char* copyString(const char* const source);

// ������� ����� �� �����
char* getWord(FILE* const stream);

// �������� ����� �� ���������
bool stringsAreEqual(const char* const string1, const char* const string2);

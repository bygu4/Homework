#pragma once
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

// ����������� ������� ������ �� ������������ ������
char* getString(const char breakPoint);

// �������� ����� ������
char* copyString(const char* const source);

// �������� ����� �� ���������
bool stringsAreEqual(const char* const string1, const char* const string2);

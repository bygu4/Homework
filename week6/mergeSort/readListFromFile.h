#pragma once
#include "List.h"
#include <stdio.h>

#define INCORRECT_FORMAT 3

// ������� ������ �� ����� � �������� � ������. ���������� ��� ������
int readListFromFile(List* const list, const char* const nameOfFile);

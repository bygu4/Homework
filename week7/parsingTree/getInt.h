#pragma once
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

// ��������� ������ ����� �� ������. ���������� �� ��������� ������� ������ ��� ��������� ������
int getInt(FILE* const stream, bool* const errorOccured);

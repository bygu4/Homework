#pragma once
#include "List.h"
#include <stdbool.h>

// ��������� ��������� ������ �� �����
bool compareByName(const List* const list1, const List* const list2);

// ��������� ��������� ������ �� ������
bool compareByNumber(const List* const list1, const List* const list2);

// ���������� �������� �� ����������� �����
int mergeSort(List* const list, bool (*key)(const List* const, const List* const));

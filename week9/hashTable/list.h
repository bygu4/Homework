#pragma once
#include <stdbool.h>
#include <stdio.h>

typedef struct List List;

// �������� ������� ������
List* createList(void);

// ��������� ������� ������
size_t size(const List* const list);

// ���������� � ����� ������, ���� �� ������� ������ ������. ���������� ������� ������ ��� ��������� ������
bool push(List* const list, const char* const data);

// ������� ������ � �������
void printList(const List* const list);

// ���������� ������, ���������� ��� ������
void freeList(List** const list);

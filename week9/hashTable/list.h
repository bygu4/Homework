#pragma once
#include <stdbool.h>
#include <stdio.h>

typedef struct List List;

// �������� ������� ������
List* createList(void);

// ���������� ������, ���������� ��� ������
void freeList(List** const list);

// ��������� ������� ������
size_t size(const List* const list);

// ���������� � ����� ������, ���� �� ������� ������ ������. ���������� ������� ������ ��� ��������� ������
bool push(List* const list, const char* const key);

// ������� ������ � �������
void printList(const List* const list);

// �������� ����� ��������� �� �����
unsigned int numberOfEntries(const List* const list, const char* const key);

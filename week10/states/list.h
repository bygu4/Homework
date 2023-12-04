#pragma once
#include <stdbool.h>
#include <stdio.h>

typedef struct List List;

// �������� ������� ������
List* createList(void);

// ������������ ������, ���������� ��� ������
void freeList(List** const list);

// ���������� � ����� ������. ���������� ������� ������ ��� ��������� ������
bool push(List* const list, const unsigned int city, const unsigned int distance);

// ��������� ������ ������ �� �������
unsigned int city(List* const list, const size_t index);

// ��������� ����� ������ �� �������
unsigned int distance(List* const list, const size_t index);

// ��������� ������� ������
size_t size(const List* const list);

// ������� � ������� ������ �������
void printList(const List* const list);

// �������� ������ � �������� ������� �� ������
bool arrayIsEqual(const List* const list, const unsigned int* array, const size_t length);

#pragma once
#include <stdbool.h>
#include <stdio.h>

typedef struct List List;

// ������� ������ ������
List* createList(void);

// �������� �� ������� ������
bool isEmpty(const List* const list);

// ���������� � ����� ������
bool push(List* const list, const int value);

// ������� ������� ��������� �� �������
void deleteElement(List* const list);

// ����� �������� �������� �� ��������� �� ���
void switchCurrent(List* const list);

// ���������� ������� ������� � ������ ������
void setCurrent(List* const list);

// �������� ������ � ���� �������
int* getValues(const List* const list);

// ���������� ������, ���������� ��� ������
void freeList(List** const list);

// ���������� true, ���� ������� ������� ����� NULL, ����� false
bool currentIsNull(const List* const list);

// ������� ������ � �������
void printList(const List* const list);

// �������� ������ ������
size_t size(const List* const list);

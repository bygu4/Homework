#pragma once
#include <stdbool.h>
#include <stdio.h>

#define SUCCESS 0
#define BAD_ALLOCATION 1

typedef struct List List;

// �������� ������� ������
List* createList(void);

// �������� �� ������� ������
bool isEmpty(const List* const list);

// ��������� ������� ������
size_t size(const List* const list);

// ��������� ����� �� ������ ������
char* getName(const List* const list);

// ��������� ������ �� ������ ������
char* getNumber(const List* const list);

// ���������� � ����� ������, ���������� ��� ������
int push(List* const list, const char* const name, const char* const number);

// �������� �� ������ ������
void pop(List* const list);

// ������������ ������, ���������� ��� ������
void freeList(List** const list);

// ����� ������ � �������
void printList(const List* const list);

// ��������� ������ � ���� ������� �����. ���������� �� ��������� ��� ������
char** getList(const List* const list, int* const errorCode);

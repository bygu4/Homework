#pragma once
#include <stdbool.h>

// ���� char'��
typedef struct Stack Stack;

// �������� ������� �����
Stack* createStack(void);

// �������� �� ������� �����
bool isEmpty(const Stack* const stack);

// ��������� �������� �� ������ �����
char top(const Stack* const stack);

// ���������� � ����, ���������� ������� ������ ��� ��������� ������
bool push(Stack* const stack, const char value);

// �������� �� �����
void pop(Stack* const stack);

// ������������ ������, ���������� ��� ����
void freeStack(Stack** const stack);

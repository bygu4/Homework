#pragma once
#include <stdio.h>
#include <stdbool.h>

#define NUMBER_OF_BUCKETS 256

typedef struct HashTable HashTable;

// ������� ������ �������
HashTable* createHashTable(void);

// ���������� ������, ���������� ��� �������
void freeHashTable(HashTable** const table);

// �������� ������� � �������, ���������� ������� ������ ��� ��������� ������
bool add(HashTable* const table, const char* const key);

// ������� ������ � �������
void printTable(const HashTable* const table);

// ��������� ����������� ������������� �������
double getLoadFactor(const HashTable* const table);

// �������� ������������ ����� ������
size_t getMaxLength(const HashTable* const table);

// ��������� ������� ����� ������
double getAverageLength(const HashTable* const table);

// �������� ����� ��������� �� �����
unsigned int getNumberOfEntries(const HashTable* const table, const char* const key);

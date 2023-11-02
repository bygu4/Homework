#pragma once
#include <stdbool.h>

typedef struct SearchTree SearchTree;

// �������� ������� ������
SearchTree* createTree(void);

// ���������� � ������ �� �����. ���������� ������� ������ ��� ��������� ������
bool addNode(SearchTree* const tree, const int key, const char* const data);

// ��������� �������� �� �����
char* getData(const SearchTree* const tree, const int key);

// �������� ������� ������� ����� � ������
bool findKey(const SearchTree* const tree, const int key);

// �������� �������� �� �����. ���� ������� ������, ���������� true, ����� - false
bool deleteNode(SearchTree* const tree, int const key);

// ������������ ������, ���������� ��� ������
void freeTree(SearchTree** const tree);

// �������� ������������ ���������� ������ �������� � ������
bool checkTreeByPreorder(const SearchTree* const tree, const int* const keys, const size_t sizeOfArray);

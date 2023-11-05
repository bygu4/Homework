#pragma once
#include <stdio.h>
#include <stdbool.h>

#define SUCCESS 0
#define BAD_ALLOCATION 1
#define FILE_NOT_FOUND 2
#define DIVISION_BY_ZERO 3

typedef struct ParsingTree ParsingTree;

// ������� ���� � ��������� ������ �������. ���������� ��� ������
int buildTree(ParsingTree** const tree, const char* const nameOfFile);

// �������� �������� ���������, � ���� �����, ������� ��������� � ��������� �����. ���������� �� ��������� ��� ������
int calculateTree(const ParsingTree* const tree, const bool printTree, int* const errorCode);

// ���������� ������, ���������� ��� ������
void freeTree(ParsingTree** const tree);

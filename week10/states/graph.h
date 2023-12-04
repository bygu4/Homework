#pragma once
#include <stdbool.h>
#include <stdio.h>

#define SUCCESS 0
#define BAD_ALLOCATION 1
#define FILE_NOT_FOUND 2

typedef struct Graph Graph;

// ������� ������ �� ����� � ������� ��������������� ����. ���������� ��� ������
int createGraph(Graph** const graph, const char* const nameOfFile);

// ���������� ������, ���������� ��� ����
void freeGraph(Graph** const graph);

// ������������ ��������� ��������� ����� � ������� �����������. ���������� ������� ������ ��� ��������� ������
bool occupy(Graph* const graph, const unsigned int numberOfState, bool* const occupied);

// ������� � ������� ������ ���������� �� ������� �������
void printStates(const Graph* const graph);

// �������� ����� �������
size_t numberOfCities(const Graph* const graph);

// �������� ����� ������
size_t numberOfCapitals(const Graph* const graph);

// ��������� ������ ������� ������� �����������
bool checkStates(const Graph* const graph, const unsigned int** const expectedStates, 
    const size_t* const lengths);

﻿#include "str.h"
#include <stdlib.h>

typedef struct {
    char* data;
    size_t length;
    size_t capacity;
} String;

static String* createString(void)
{
    String* string = (String*)malloc(sizeof(String));
    if (string == NULL)
    {
        return NULL;
    }
    string->length = 0;
    string->capacity = 1;
    string->data = (char*)calloc(string->capacity, sizeof(char));
    if (string->data == NULL)
    {
        free(string);
        return NULL;
    }
    return string;
}

static void freeString(String** const string)
{
    free((*string)->data);
    free(*string);
    *string = NULL;
}

static bool addCharToString(String* string, const char character)
{
    if (string->capacity <= string->length + 1)
    {
        string->capacity *= 2;
        string->data = (char*)realloc(string->data, string->capacity);
        if (string->data == NULL)
        {
            free(string);
            return true;
        }
    }
    ++string->length;
    string->data[string->length - 1] = character;
    string->data[string->length] = '\0';
    return false;
}

static void swap(char** const string1, char** const string2)
{
    char* temp = *string1;
    *string1 = *string2;
    *string2 = temp;
}

static char* fgetString(FILE* const stream, const char breakPoint)
{
    String* string = createString();
    if (string == NULL)
    {
        return NULL;
    }
    char character = fgetc(stream);
    while (!feof(stream) && character != breakPoint)
    {
        bool errorOccured = addCharToString(string, character);
        if (errorOccured)
        {
            return NULL;
        }
        character = fgetc(stream);
    }
    char* output = NULL;
    swap(&output, &string->data);
    freeString(&string);
    return output;
}

char* getString(const char breakPoint)
{
    return fgetString(stdin, breakPoint);
}

int readFile(char** const result, const char* const nameOfFile)
{
    FILE* inputFile = NULL;
    int errorCode = fopen_s(&inputFile, nameOfFile, "r");
    if (errorCode != SUCCESS)
    {
        return errorCode;
    }
    *result = fgetString(inputFile, EOF);
    fclose(inputFile);
    return *result != NULL ? SUCCESS : BAD_ALLOCATION;
}

bool stringsAreEqual(const char* const string1, const char* const string2)
{
    for (size_t i = 0; string1[i] != '\0' || string2[i] != '\0'; ++i)
    {
        if (string1[i] != string2[i])
        {
            return false;
        }
    }
    return true;
}

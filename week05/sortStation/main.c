﻿#include "convertToPostfixForm.h"
#include "str.h"
#include "test.h"
#include <stdio.h>
#include <stdlib.h>

int main(const unsigned int argc, const char* const argv[])
{
    const bool allTestsArePassed = test();
    if (!allTestsArePassed)
    {
        return TEST_FAILED;
    }
    if (argc == 2 && stringsAreEqual(argv[1], "-test"))
    {
        return SUCCESS;
    }
    printf("Enter an ariphmetic expression: ");
    String* inputString = getString('\n');
    if (inputString == NULL)
    {
        printf("An error occured\n");
        return BAD_ALLOCATION;
    }

    int errorCode = SUCCESS;
    String* output = convertToPostfixForm(inputString, &errorCode);
    freeString(&inputString);
    if (errorCode != SUCCESS)
    {
        freeString(&output);
        printf("An error occured\n");
        return errorCode;
    }
    printf("Expression in postfix form: %s\n", output->data);
    freeString(&output);
}

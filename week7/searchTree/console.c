#include "console.h"
#include "SearchTree.h"
#include "str.h"
#include <stdlib.h>

static int getKey(void)
{
    int key = 0;
    printf("Enter the key: ");
    scanf_s("%d", &key);
    return key;
}

static bool addNodeConsole(SearchTree* const tree)
{
    int key = getKey();
    getchar();
    printf("Enter data: ");
    char* data = getString('\n');
    if (data == NULL)
    {
        return true;
    }
    bool errorOccured = addNode(tree, key, data);
    free(data);
    if (errorOccured)
    {
        return true;
    }
    printf("Item added\n");
    return false;
}

static void getDataConsole(SearchTree* const tree)
{
    int key = getKey();
    char* output = getData(tree, key);
    if (output == NULL)
    {
        printf("Key not found\n");
    }
    else
    {
        printf("%s\n", output);
    }
}

static void findKeyConsole(SearchTree* const tree)
{
    int key = getKey();
    bool keyFound = findKey(tree, key);
    if (keyFound)
    {
        printf("Key is in dictionary\n");
    }
    else
    {
        printf("Key is not in dictionary\n");
    }
}

static void deleteNodeConsole(SearchTree* const tree)
{
    int key = getKey();
    bool deleted = deleteNode(tree, key);
    if (deleted)
    {
        printf("Item deleted\n");
    }
    else
    {
        printf("Key not found\n");
    }
}

int console(void)
{
    SearchTree* tree = createTree();
    if (tree == NULL)
    {
        return BAD_ALLOCATION;
    }

    printf("Command list:\n0: exit\n");
    printf("1: add an item to the dictionary\n2: get an item by the key\n");
    printf("3: check if the key is in the dictionary\n4: delete an item by the key\n\n");

    bool errorOccured = false;
    int command = -1;
    while (command != 0)
    {
        printf("Enter a command: ");
        scanf_s("%d", &command);
        switch (command)
        {
        case 0:
            continue;
        case 1:
            errorOccured = addNodeConsole(tree);
            break;
        case 2:
            getDataConsole(tree);
            break;
        case 3:
            findKeyConsole(tree);
            break;
        case 4:
            deleteNodeConsole(tree);
            break;
        default:
            printf("Unknown command\n");
            break;
        }
        printf("\n");
        if (errorOccured)
        {
            freeTree(&tree);
            return BAD_ALLOCATION;
        }
    }
    freeTree(&tree);
    return SUCCESS;
}

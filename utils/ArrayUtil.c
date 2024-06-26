#include <string.h>

#include "../headers/ArrayUtil.h"

#define ARRAY_LENGTH(arr) (sizeof(arr) / sizeof(arr[0]))

int keySize(char* string, char key) {
    int time = 0;
    for (int i = 0; i < strlen(string); i++) {
        if (key != string[i])
            continue;

        time++;
    }
    return time;
}

int lengthOfValue(char string[]) {
    int time = 0;
    for (int i = 0; i < strlen(string); ++i) {
        if (string[i] == 0)
            continue;

        time++;
    }
    return time;
}

char *cloneCharArray(char string[], int length) {
    char nn[length] = {};
    for (int i = 0; i < length; i++)
        nn[i] = string[i];

    char *newCharArray;
    newCharArray = nn;
    return newCharArray;
}
#include <string.h>
#include <stdio.h>
#include "headers/LoggerLIB.h"
#include "headers/Message.h"
#include "headers/ArrayUtil.h"

#define FALSE 0
#define TRUE 1

#define ARRAY_LENGTH(arr) (sizeof(arr) / sizeof(arr[0]))

void send(char* message, const char* altCharColor) {
    char color = 'f';
    char key = altCharColor[0];
    _Bool scanColor = FALSE;

    char newString[strlen(message)]  = {};
    int index = 0;
    for (int i = 0; i < strlen(message); i++) {
        if (message[i] == key) {
            scanColor = TRUE;
            continue;
        }

        if (scanColor) {
            if (lengthOfValue(newString) != 0) {
                _send(newString, handle_color(color), FALSE);
                for (int j = 0; j < ARRAY_LENGTH(newString); j++)
                    newString[j] = '\0';
                index = 0;
            }
            color = message[i];
            scanColor = FALSE;
            continue;
        }

        newString[index++] = message[i];
    }

    if (lengthOfValue(newString) != 0)
        _send(newString, handle_color(color), FALSE);
    printf("\n");
}
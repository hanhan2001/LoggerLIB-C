#include <stdio.h>
#include "headers/Message.h"
#include "windows.h"

int handle_color(char altCharColor) {
    int c;
    switch (altCharColor) {
        case '1':
            c = 0x1;
            break;
        case '2':
            c = 0x2;
            break;
        case '3':
            c = 0x3;
            break;
        case '4':
            c = 0x3;
            break;
        case '5':
            c = 0x5;
            break;
        case '6':
            c = 0x6;
            break;
        case '7':
            c = 0x7;
            break;
        case '8':
            c = 0x8;
            break;
        case '9':
            c = 0x9;
            break;
        case 'a':
            c = 0xA;
            break;
        case 'b':
            c = 0xB;
            break;
        case 'c':
            c = 0xC;
            break;
        case 'd':
            c = 0xD;
            break;
        case 'e':
            c = 0xE;
            break;
        case 'f':
            c = 0xF;
            break;
    }
    return c;
}

void _send(char* message, int altCharColor, _Bool line) {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), altCharColor);
    printf("%s", message);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xF);
    if (line)
        printf("\n");
}
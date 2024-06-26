#ifndef TERMINALCOLOR_MESSAGE_H
#define TERMINALCOLOR_MESSAGE_H

typedef struct {
    char* msg;
    int color;
} Message;

void initMessage(Message messageEntity, char* message, char color);
void _send(char* message, int altCharColor, _Bool line);
int handle_color(char altCharColor);

#endif
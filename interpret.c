#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "interpret.h"
#include "stack.h"

void interpret (const char *source) {
    char op[10];
    char arg[10];
    int a, b;

    sscanf (source, "%s%s", op, arg);

    if (strcmp(op, "push") == 0) {
        int value = atoi(arg);
        push(value);
    } else if (strcmp(op, "add") == 0) {
        b = pop();
        a = pop();
        push(a + b);
    } else if (strcmp(op, "sub") == 0) {
        b = pop();
        a = pop();
        push(a - b);
    } else if (strcmp(op, "mul") == 0) {
        b = pop();
        a = pop();
        push(a * b);
    } else if (strcmp(op, "div") == 0) {
        b = pop();
        a = pop();
        if (b != 0) {
            push(a / b);
        } else {
            printf("Erro: divisão por zero.\n");
            push(a);
            push(b);
        }
    } else if (strcmp(op, "print") == 0) {
        int value = pop();
        printf("%d\n", value);
    } else if (strcmp(op, "exit") == 0) {
        exit(0);
    } else {
        printf("Comando desconhecido: %s\n", op);
    }
}

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define MAX_STACK 1024

static int stack[MAX_STACK];
static int top = -1;

void push(int value) {
    if (top < MAX_STACK - 1) {
        stack[++top] = value;
    } else {
        printf("Erro: pilha cheia.\n");
    }
}

int pop() {
    if (top >= 0) {
        return stack[top--];
    } else {
        printf("Erro: pilha vazia.\n");
        return 0;
    }
}

int is_empty() {
    return top == -1;
}

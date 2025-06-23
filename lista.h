#ifndef LISTA_H
#define LISTA_H

struct node {
    char key[15];
    int value;
    struct node* next;
};

struct list {
    struct node* first;
};

void set_variable(struct list* l, const char* key, int value);
int get_variable(struct list* l, const char* key, int* found);

#endif

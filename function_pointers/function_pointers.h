#ifndef FUNCTIONS_POINTER_H
#define FUNCTIONS_POINTER_H

void print_name(char *name, void (*f)(char *));

int int_index(int *array, int size, int (*cmp)(int));

#endif

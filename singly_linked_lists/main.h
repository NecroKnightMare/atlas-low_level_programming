#ifndef MAIN_H
#define MAIN_H
#include <stdio.h.>
#include <stdlib.h>

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

int _putchar(char c);
{
	return (write(1, &c, 1));
}

#endif

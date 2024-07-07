#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stddef.h>

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
int list_t *add_node(list_t **head, const char *str);
int list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

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

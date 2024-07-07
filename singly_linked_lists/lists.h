#ifndef LISTS_H
#define LISTS_H

#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
/**
 * struct list_s - ssl
 * @str: malloc'ed string
 * @len: length of string
 * @next: next node
 * Description: a structure of a singly linked list
**/
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
/**
 *_putchar - print character
 *c: character
 *Return: character
**/ 
int _putchar(char c)
{
	return (write(1, &c, 1));
}

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
int _putchar(char c);

#endif

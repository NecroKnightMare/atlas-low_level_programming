#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_list - prints all elements of list_t
 *h: pointer to node in ssl
 *Return: the number of nodes and nil [0] if Null
**/
size_t print_list(const list_t *h)
{
	char *str = 0;
	size_t num;

	if (str == NULL)
{
		printf("[0] (nil)");
}
	for (num = 0; h; num++)
{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
}
	return (num);
}

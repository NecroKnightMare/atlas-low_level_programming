#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 *print_list - prints all elements of list_t
 *h: pointer to node in ssl
 *Return: the number of nodes and nil [0] if Null
**/
size_t print_list(const list_t *h)
{
	size_t num = 0;
	
	while (h)
{
	if (h == NULL)		
{
		printf("[0] (nil)\n");
}
	else
{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		num++;
}
}
	return (num);
}

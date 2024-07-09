#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *print_listint - print list
 *@h: pointer to value
 *
 *Return: number of integers
**/
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
{
		printf("%d\n", h->n);
		h = h->next;
		num++;
}
	return (num);
}

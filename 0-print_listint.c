#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *
 *
 *
 *
**/
size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	
	while (h)
{
	if (!h)		
{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		num++;
}
}
	return (num);
}

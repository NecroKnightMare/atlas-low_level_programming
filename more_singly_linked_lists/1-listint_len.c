#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *
 *
 *
**/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	while (h)
{
	i++;
	h = h->next;
}
	return (i);
}

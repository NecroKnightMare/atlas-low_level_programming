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
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (!new)
{
		return (NULL);
}
	new->prev = NULL;
	new->n = n;
	new->next = NULL;



	return (new);
}

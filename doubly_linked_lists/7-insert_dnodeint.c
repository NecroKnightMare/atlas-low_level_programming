#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *insert_dnodeint_at_index - insert new node at index
 *@h: pointer to DLL
 *@idx: position in DLL
 *@n: data value
 *Return: return node at index
**/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	int count = 0;

	if (!new || !idx || !h)
{
		return (NULL);
}
	new = malloc(sizeof(dlistint_t));
	
	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	temp = *h;

	while (temp)
{
		count++;
		if (count == idx)
{
			return (new);
}
		temp->next = new;
		new->prev = temp;
}
	return (new);
}

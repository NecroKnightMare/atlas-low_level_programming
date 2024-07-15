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
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));

	if (!new || idx == 0 || !h)
{
		return (NULL);
}
	
	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	if (idx == 1)
{
		new->next = *h;
		if (*h)
{
			(*h)->prev = new;
}
		temp = *h;

		while (temp && count < idx - 1)
{
		temp = temp->next;
		count++;
}
		if (!temp)
{
			free(new);
			return (NULL);
}
		if (temp->next)
{
		new->next = temp->next;
}
			temp->next = new;
			new->prev = temp;
}
	return (new);
}

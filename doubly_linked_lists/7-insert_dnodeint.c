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
	unsigned int count = 1;
	listint_t *tmp;
	listint_t *new;

	idx = 0;

	if (head == NULL)
{
		return (NULL);
}
	tmp = *head;

	while (tmp && count < idx)
{
		tmp = tmp->next;
		count++;
}
	new = malloc(sizeof(listint_t));

	if (new == NULL)
{
		free(new);
		return (NULL);
}
	new->n = n;

	if (count == 0)
{
	*head = new;
	new->next = tmp;
}
		else if (tmp->next)
{
			new->next = tmp->next;
			tmp->next = new;
}
		else
{
			new->next = NULL;
			tmp->next = new;
}
	return (new);
}

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 *
 *
 *
 *
**/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 1;
	listint_t *tmp;
	listint_t *in;

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
	in = malloc(sizeof(listint_t));

	if (in == NULL)
{
		free(in);
		return (NULL);
}
	in->n = n;

	if (count == 0)
{
	*head = in;
	in->next = tmp;
}
		else if (tmp->next)
{
			in->next = tmp->next;
			tmp->next = in;
}
		else
{
			in->next = NULL;
			tmp->next = in;
}
	return (in);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *get_nodeint_at_index - get node at index
 *@head: head of sll
 *@index: counter
 *Return: count
**/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp;

	tmp = head;

	while (i < index)
{
		if (tmp)
{
			tmp = tmp->next;
}
		else
{
			return (NULL);
			i++;
}
}
	return (tmp);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *get_dnodeint_at_index - grab node at a spec area
 *@head: pointer to DLL
 *@index: position in chain
 *Return: return index
**/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *tmp;

	tmp = head;

	while (tmp)
{

		if (count == index)
{
			return (tmp);
}
		tmp = tmp->next;
		count++;
}
	if (!tmp)
{
		return (NULL);
}
	return (tmp);
}

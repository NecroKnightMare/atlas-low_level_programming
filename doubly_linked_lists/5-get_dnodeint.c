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
	unsigned int count = 1;
	/**listint_t *new;**/
	dlistint_t *tmp;

	index = 0;
	tmp = head;

	while (count < index)
{

		if (tmp)
{
		tmp = tmp->next;
		count++;
}
	/**new = malloc(sizeof(listint_t));**/

	if (!tmp)
{
		return (NULL);
}
}
	return (tmp);
}

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_nodeint_end - add node to end
 *@head: pointer to head of sll
 *@n: value
 *Return: end node
**/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;/**end node**/

	listint_t *tmp;/**temporary node**/

	tmp = *head;
	
	while (tmp && tmp->next != NULL)
{
		tmp = tmp->next;
}
	end = malloc(sizeof(listint_t));/**allocate memory at end**/

	if (end == NULL)
{
		return (NULL);
}
	end->n = n;
	end->next = NULL;
	
	if (tmp)
{
		tmp->next = end;
}
	else
{
		*head = end;
}
	return (end);
}

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *
 *
 *
 *
**/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;/**end node**/
	listint_t *tmp = *head;/**temporary node**/
	
	tmp = *head;

	while (tmp != NULL)/**if not new node**/
{
		tmp = tmp->next;
}
	end = malloc(sizeof(listint_t));/**allocate memory at end**/
	
	if (end == NULL)
{
	return (NULL);
}
	end->n = n;/**make sure its the same size**/
        end->next = NULL;/**instead of beginning, NULL = tail**/
	
	if (tmp)
{
	tmp->next = end;/**head pointer will equal to end node**/
}
	else
		*head = end;
	return (end);
}

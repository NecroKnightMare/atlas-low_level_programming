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
	
	end = malloc(sizeof(listint_t));/**allocate memory at end**/

	if (!end)/**if not new node**/
{
		return (NULL);
}
	end->n = n;/**make sure its the same size**/
	end->next = NULL;/**instead of beginning, NULL = tail**/

	if (*head == NULL)
{
	*head = end;/**head pointer will equal to end node**/
	return (end);
}

	while (tmp->next)/**tmp will be next node to create space for string**/
{
		tmp = tmp->next;/**tmp is next node**/

		tmp->next = end;/**next node is end node**/
}
	return(end);
}

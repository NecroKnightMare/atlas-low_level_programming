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
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *s;/**end node**/
	listint_t *tmp = *head;/**temporary node**/
	unsigned int len;
	
	for (len = 0; str[len]; len++)
{
}
	s = malloc(sizeof(listint_t));/**allocate memory at end**/

	if (!s)/**if not new node**/
{
		return (NULL);
}

	s->str = strdup(str);/**dup string into node**/
	s->len = len;/**make sure its the same size**/
	s->next = NULL;/**instead of beginning, NULL = tail**/

	if (*head == NULL)
{
	*head = s;/**head pointer will equal to end node**/
	return (s);
}

	while (tmp->next)/**tmp will be next node to create space for string**/
{
		tmp = tmp->next;/**tmp is next node**/

		tmp->next = s;/**next node is end node**/
}
	return(s);
}

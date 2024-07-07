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
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *s;/**end node**/
	list_t *tmp = *head;/**temporary node**/
	unsigned int len;
	
	for (len = 0; str[len]; len++)
{
}
	s = malloc(sizeof(list_t));/**allocate memory at end**/

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


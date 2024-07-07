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
listint_t *add_nodeint(listint_t **head, const int n)
{
		list_t *new; /*pointer to string*/
	unsigned int len = 0; /* size of sll*/

	while (n[len])
{
		len++;

	new = malloc(sizeof(list_t)); /** pointer  will need the size of node**/
		new->n = strdup(n);/**dup string into new node called s**/
		new->len = len;/**pointer length equals incremented string**/
		new->next = *head;/**next node equals head pointer of sll**/
		*head = new;/**pointer to head equals string**/
        if (!new)/**if not s free space and ret null**/
{
                free(new);
                return (NULL);
}
}
	return (*head); /**return string thats dup into node head**/
}

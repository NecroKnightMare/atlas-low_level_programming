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
	listint_t *new; /*pointer to string*/


	new = malloc(sizeof(listint_t)); /** pointer  will need the size of node**/

	if (!new)/**if not s free space and ret null**/
{
		return (NULL);
}
	new->n = n;/**pointer new is now new node**/
	new->next = *head;/**next node equals head pointer of sll**/
	*head = new;/**pointer to head equals new node**/
	return (*head); /**return string into node head**/
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_dnodeint_end - add new node at end
 *@head: head of DLL
 *@n: data value
 *Return: address of end node- NULL if fail
**/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;/**new node for end will equal tail**/

	new = malloc(sizeof(dlistint_t));/**grab size of node**/

	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
{
		*head = new;
		return (NULL);
}
	dlistint_t *tail = head;

	while (tail->next != NULL)
{
		tail = tail->next;
		tail->next = new;
		new->prev = tail;
}
	return (new);
}

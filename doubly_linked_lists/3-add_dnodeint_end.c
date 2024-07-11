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
		
	new = *tail;/**new pointer = head pointer**/

	new = malloc(sizeof(dlistint_t));/**grab size of node**/

	if (new == NULL)/**if new fails and = NULL**/
{
		return (NULL);
}
	/**add tail somewhere**/
	new->n = n;/**new goes into n(data) and replaces data**/
	new->next = *tail;/**the new goes into next and = head p**/
	*tail = new;/**pointer = new node**/

	return(*tail);/**return pointer address**/
}

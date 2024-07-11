#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_dnodeint - add node at the beginning
 *@head: head of DLL
 *@n: data value of DLL
 *Return: the address of the new element or NULL if fail
**/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;/**new node**/

	new = *head;/**new pointer = head pointer**/

	new = malloc(sizeof(dlistint_t));/**grab size of node**/

	if (new == NULL)/**if new fails and = NULL**/
{
		return (NULL);
}
	new->n = n;/**new goes into n(data) and replaces data**/
	new->next = *head;/**the new goes into next and = head p**/
	*head = new;/**pointer = new node**/
	
	return(*head);/**return pointer address**/
}

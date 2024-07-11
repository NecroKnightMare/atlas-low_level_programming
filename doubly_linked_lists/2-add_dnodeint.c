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
	dlistint_t *tmp;

	new = malloc(sizeof(dlistint_t));/**grab size of node**/

	if (head == NULL)/** if head is at hte beginning of DLL**/
{
		tmp = (*head)->next;/**temp = head going into next**/
		(*head)->next = new;/**then head going into newxt = new node**/
		tmp->prev = new;/**temp goes into previous that = new node**/

		new->prev = (*head);/**now new that went into prev now = head**/
		new->next = tmp;/**new going into next = temp node**/
		new->n = n;/**new node goes into data node and = data**/
}
		else
{
		return (NULL);/**if not return NULL when fail**/
}
	return (new);/**return new node that = data**/
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *dlistint_t new_node - make new node
 *@n: data
 *Return: new node
**/
dlistint_t *NodeN(int data)
{
	dlistint_t* new = (dlistint_t *)malloc(sizeof(dlistint_t));
	
	new->n = data;
	new->prev = NULL;
	new->next = NULL;
	return (new);
}
/**
 *add_dnodeint - add node at the beginning
 *@head: head of DLL
 *@n: data value of DLL
 *Return: the address of the new element or NULL if fail
**/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NodeN(n);/**recall for size of struct of node**/

	if (*head == NULL)/**if new fails and = NULL**/
{
		*head = new;/**pointer wil equal new node**/
		return (NULL);/**if fail**/
}
	(*head)->prev = new;/**pointer goeas into prev and is the new node**/
	new->next = *head;/**the new goes into next and = head p**/
	*head = new;/**pointer = new node**/

	return(*head);/**return pointer address**/
}

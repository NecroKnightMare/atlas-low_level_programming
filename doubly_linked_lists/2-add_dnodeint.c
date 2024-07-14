#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_dnodeint - make new node at beginning
 *@n: data
 *@head: address of DLL
 *Return: new node
**/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (!new)
{
		return (NULL);
}
	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
{
		*head = new;
}
	else
{
	new->next = *head;
	(*head)->prev = new;
	*head = new;
}
	return (new);
}

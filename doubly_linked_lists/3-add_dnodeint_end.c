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
	dlistint_t *new;
	dlistint_t *end;


	new = malloc(sizeof(dlistint_t));

	if (!new)
{
		return (NULL);
}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
{
		new->prev = NULL;
		*head = new;
}
	else
{
	end = *head;

	while (end->next != NULL)
{
	end = end->next;
}	
	end->next = new;
	new->prev = end;
}
	return (end);
}

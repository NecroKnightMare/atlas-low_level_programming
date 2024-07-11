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
	dlistint_t *tmp;/**new node**/

	while (*head)
{
		tmp = malloc(sizeof(dlistint_t));
		
		if (*tmp == NULL)
{
			(*head) = tmp;
			return (NULL);
}
		if (tmp->n == NULL)
{
			return (NULL);
}
		tmp->next = (*head);
		(*head)->prev = tmp;
		(*head) = tmp;
}
	return (*head);
}

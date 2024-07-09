#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *pop_listint - delete node and ret head data
 *@head: head node in SLL
 *Return: head data
**/
int pop_listint(listint_t **head)
{
	int n;

	listint_t *ret;/**ret head data and delete head node**/

	if (*head == NULL)
{
	return (0);
}
	ret = *head;
	n = (*head)->n;
	*head = (*head)->next;

	free(ret);

	return(n);
}

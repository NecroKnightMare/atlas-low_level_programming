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
int pop_listint(listint_t **head)
{
	int n;
	listint_t *ret;/**ret head data and delete head node**/

	if (*head == NULL)
{
		ret = (*head)->next;
		n = (*head)->n;
		*head = ret;

		free(*head);
}
	return(n);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *free_dlistint - free elements in DLL
 *@head: pointer to DLL
 *Return: void
**/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *rem;

	if (head == NULL)
{
		return;
}
	rem = head;

	while (rem->next != NULL)
{
		rem = rem->next;
		free(rem->prev);
}
	free(rem);
	head = NULL;
}

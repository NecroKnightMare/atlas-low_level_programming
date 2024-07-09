#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *free_listint2 - free sec list
 *@head: pointer to first node in SSL
 *Return: nothing void
**/
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	
	while (*head != NULL)
{
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
}
	*head = NULL;
}

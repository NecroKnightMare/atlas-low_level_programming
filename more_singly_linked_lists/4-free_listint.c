#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *free_listint - free sll
 *@head: head of sll
 *
 *Return: nothing void
**/
void free_listint(listint_t *head)
{
	if (head != NULL)
{
		free_listint(head->next);
		free(head);
}
}

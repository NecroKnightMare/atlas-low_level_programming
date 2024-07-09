#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *free_list - free elements in list
 *@head: head of sll
 *Return: void
**/
void free_list(list_t *head)
{
	if (head->str == NULL)
{
		free(head->next);
		if (head->str)
{
			free(head->str);
			free(head);
}
}
}

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
void free_dlistint(dlistint_t *head)
{
	if (head)
{
		free_list(head->next);
		if (head->str)
{
			free(head->str);
			free(head);
}
}
}
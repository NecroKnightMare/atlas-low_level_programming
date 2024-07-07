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
list_t *add_node_end(list_t **head, const char *str)
{
	struct Node* new = (struct Node*)malloc(sizeof(struct Node));
	new->len = added;
	struct Node* tail = *head;
	new->next = NULL;
	
	if (*head == NULL)
{
		*head = new;
}
	return (*head);
}


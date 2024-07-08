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
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	if (!tmp)
{
		return (NULL);
}
	while(tmp)
{
		if (i < index)
{
			tmp = tmp->next;
			i++;
}
}
	return(tmp);
}

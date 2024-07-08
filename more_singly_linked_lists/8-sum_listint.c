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
int sum_listint(listint_t *head)
{
	int count;
	if (!head)
{
	return (0);
}
	while (head)
{
		count += head->n;
		head = head->next;
}
	return (count);
}

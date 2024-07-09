#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *sum_listint - sums all data in sll
 *@head: head of sll
 *Return: sum
**/
int sum_listint(listint_t *head)
{
	int count = 0;

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

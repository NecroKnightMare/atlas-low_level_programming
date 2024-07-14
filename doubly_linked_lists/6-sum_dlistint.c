#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *sum_dlistint - get sum of elements
 *@head: pointer ro DLL
 *Return: return sum
**/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
{
	return (0);
}
	while (head)
{
		sum += head->n;
		head = head->next;
}
	return (sum);
}

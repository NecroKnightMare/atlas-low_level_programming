#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *delete_dnodeint_at_index = delete node at index
 *@head: pointer to DLL
 *@index: specific node in DLL
 *Return: 1 if success; -1 if failed
**/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;

	if (!*head)
{
		return (-1);
}
	if (index == 0)
{
		temp = *head;
		*head = (*head)->next;
		if (*head)
{
			(*head)->prev = NULL;
			free(head);
			return (1);/**changecorrect**/
}
}
		temp = *head;
		if (!temp)
{
			return (-1);/**changed--out of range handle?--again**/
}
		if (temp->prev != NULL)
{
			(*head)->prev->next = (*head)->next;
			/**free(temp); will see if not needed**/
			return (1);/**changed to 1**/
}
		if (temp->next != NULL)
{
			(*head)->next->prev = (*head)->prev;
			free(temp);
			return (1);
}
	/**free(head);leaking mem added free- didn't work**/
	return (-1);
}

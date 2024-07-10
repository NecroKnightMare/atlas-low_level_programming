#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *print_dlistint - print all nodes in doubly linked list
 *@h: head node
 *Return: number of nodes
**/
size_t print_dlistint(const dlistint_t *h)/**Dll doesn't change and p in arg**/
{
	int count = 0;/**count number of nodes**/

	while (h)/**if linked list---**/
{
		count++;/**increment nodes**/
		printf("%d\n", h->n);/**print int of the node in LL struct**/
		h = h->next;/**go through nodes**/
}
	return (count);/**return the number of nodes**/
}

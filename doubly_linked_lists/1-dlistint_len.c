#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *dlistint_len - returns length of a DLL
 *@h: start of LL
 *Return: number of elements in LL
**/
size_t dlistint_len(const dlistint_t *h)/**print length of LL**/
{
	int length = 0;/**use length for readability**/

	while (h)/**while DLL--**/
{
		length++;/**increment length**/
		h = h->next;/**go through nodes**/
}
	return (length);/**return length of LL**/
}

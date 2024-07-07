#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h" 
/**
 *list_t *add_node - adding node to sll
 *@head: head of list
 *@str: string in the sll
 *Return: null if null; duplicated string
**/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new; /*pointer to string*/
	unsigned int len = 0; /* size of sll*/
	
	while (str[len])
{
		len++;	
		new = malloc(sizeof(list_t)); /** pointer  will need the size of node**/
		if (!new)/**if not s free space and ret null**/
{
		return (NULL);
}
	new->str = strdup(str);/**dup string into new node called s**/
	new->len = len;/**pointer length equals incremented string**/
	new->next = *head;/**next node equals head pointer of sll**/
	*head = new;/**pointer to head equals string**/
}
	return (*head); /**return string thats dup into node head**/
}
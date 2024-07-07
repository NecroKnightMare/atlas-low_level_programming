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
	list_t *s; /*pointer to string*/
	unsigned int len = 0; /* size of sll*/
	
	while (str[len] != '\0')
{
		len++;
	
		s = malloc(sizeof(list_t)); /** pointer  will need the size of node**/
		if (!s)/**if not s free space and ret null**/
{
		free(s);
		return (NULL);
}
		s->str = strdup(str);/**dup string into new node called s**/
		s->len = len;/**pointer length equals incremented string**/
		s->next = *head;/**next node equals head pointer of sll**/
		*head = s;/**pointer to head equals string**/
}
	return (*head); /**return string thats dup into node head**/
}

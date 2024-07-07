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
	size_t i = 0; /* size of sll*/
	
	s = malloc(sizeof(list_t)); /** pointer  will need the size of node**/
	
	while (s == NULL)/**parameter of task**/
{
		free(s);/**free space**/
                return (NULL);
}
        s->str = strdup(str);/**duplicate str into node**/
	
	if (s->str == NULL)
{
		free(s);
		return (NULL);
}
		while (str[i])
{
		s->len = i;/**pointer length equals incremented string**/
		s->next = *head;/**next node equals head pointer of sll**/
		*head = s;/**pointer to head equals string**/
		i++;/**increment through string to duplicate**/
}
	return (*head); /**return string thats dup into node head**/
}

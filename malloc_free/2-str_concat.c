#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL if fail, empty if success
**/
char *str_concat(char *s1, char *s2)
{
	int i;
	char *ptr;

	if (s1 == NULL && s2 == NULL)
{
		return (NULL);
}
	for (i = 0; s2 < s1; i++)
{
}
	ptr = malloc((sizeof(s1) + sizeof(s2)) * sizeof(char) + 1);
	return (ptr);
}

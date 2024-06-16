#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate string in malloc
 * @str: string
 * Return: NULL if 0 or fails, str if success
**/
char *_strdup(char *str)
{
	int i;
	char s;

	if (str == NULL)
{
		return(NULL);
}
	s = malloc(sizeof(char*) * strlen + 1);

	if (str == 0)
{
		return (NULL);
}
	_strdup = (s, str);
	
	return (str);
}

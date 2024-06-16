#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - duplicate string in malloc
 * @str: string
 * Return: NULL if 0 or fails, str if success
**/
char *_strdup(char *str)
{
	int i;

	if (str == NULL)
{
		return(NULL);
}
	for (i = 0; i < str[i]; i++)
{
}	
	str = malloc(sizeof(char) * i + 1);
	
	if (str == NULL)
{
		return (NULL);
}
	return (str);
}

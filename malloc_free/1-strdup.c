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
	int size;

	if (str == NULL)
{
		return(NULL);
}
        for (i = 0; i < size; i++)
{
                size++;
}
	str = malloc(sizeof(char*) * size + 1);

	if (str == 0)
{
		return (NULL);
}
		return (str);
}

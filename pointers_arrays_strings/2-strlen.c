#include "main.h"

/**
 * _strlen - return string length
 * @s: string
 * Return: 0 success
*/

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
{
		s++;
		i++;
}
	return (i);
}

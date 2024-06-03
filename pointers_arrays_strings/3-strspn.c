#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: string length
 * @accept: bytes
 * Return: number of bytes
**/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while(*s)
{
		while (accept[i])
{
			i++;
			if (*s == accept[i])
{
				j++;
}
			else if ((accept[i]) == '\0')
{
				return (j);
}
		j++;
}
}
	return (j);
}

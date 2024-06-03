#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: string length
 * @accept: bytes
 * Return: number of bytes
**/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int b = 0;

	while (s[i] != '\0')
{
		i++;
		while (accept[b] != '\0')
{
			b++;
			if (s[i] == accept[b])
{
				break;
}
}
			if (!(accept[b]))
{
				break;
}
}
	return (i);
}


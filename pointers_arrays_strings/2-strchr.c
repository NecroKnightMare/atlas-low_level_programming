#include "main.h"

/**
 * *_strchr - locates a char in string
 * @s: pointer
 * @c: character
 * Return: pointer or NULL
**/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
{
		i++;
	if (c == s[i])
{			
		s += i;
		return(s);
}
}
	return ('\0');
}

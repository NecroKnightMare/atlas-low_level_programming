#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: substring pointer or NULL
**/
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (haystack[i] != '\0')
{
		haystack++;
		for (;haystack[i] == needle[i]; i++)
			if (!(needle[i]))
				return (haystack);
}
	return (0);
}

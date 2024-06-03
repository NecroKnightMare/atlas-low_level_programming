#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @str: string
 * Return: string
**/
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
}
	return (str);
}

#include "main.h"

/**
 * *string_toupper - upper case string
 * @str: string
 * Return: 0
**/
char *string_toupper(char *str)
{
	int i;

	for (i = 0; i != '\0'; i++)
{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
}
	return (0);
}
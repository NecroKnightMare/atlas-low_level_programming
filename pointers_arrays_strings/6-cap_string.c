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
{
			i++;
}
		if (str[i - i] == ',' ||
			str[i - i] == ';' ||
			str[i - i] == '.' ||
			str[i - i] == '!' ||
			str[i - i] == '?' ||
			str[i - i] == '"' ||
			str[i - i] == '(' ||
			str[i - i] == ')' ||
			str[i - i] == '{' ||
			str[i - i] == '}' ||
			str[i - i] == ' ' ||
			str[i - i] == '\t' ||
			str[i - i] == '\n' || 
			i == 0)
{
				str[i] -= 32;
				i++;
}
}
	return (str);
}

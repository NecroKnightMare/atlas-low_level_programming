#include "main.h"

/**
 * *leet - encode to 1337
 * @str: turn char into int
 * Return: 0
**/
char *leet(char *str)
{
	int i = 0;
	str['a'] = str['A'] = '4';
	str['e'] = str['E'] = '3';
	str['o'] = str['O'] = '0';
	str['t'] = str['T'] = '7';
	str['l'] = str['L'] = '1';

	while (i != '\0')
{
		i++;
}
		if (str[i] != 0)
{
			i = str[i];
}
	return (str);
}

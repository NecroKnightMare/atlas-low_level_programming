#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void 1
*/

void puts_half(char *str)
{
	char len = _strlen(str);
	char index;

	if (len % 2 == 0)
{
		index = len / 2;
}
		else
{
			index = (len - 1) / 2;
}
	for (; index < len; index++)
{
		_putchar(*str);
}
	_putchar('\n');
}

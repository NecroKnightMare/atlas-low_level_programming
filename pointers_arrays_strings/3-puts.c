#include "main.h"

/**
 * _puts - print string
 * @str: string argument
 * Return: void 1
*/

void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	_puts(str);
}

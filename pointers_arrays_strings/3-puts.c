#include "main.h"

/**
 * _puts - print string
 * @str: string argument
 * Return: void 1
*/

void _puts(char *str)
{
	for (; *str != '\0'; str++)
{
		_putchar(*str);
}
	_putchar('\n');
}

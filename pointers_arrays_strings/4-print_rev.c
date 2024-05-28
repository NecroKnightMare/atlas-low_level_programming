#include "main.h"

/**
 * print_rev - print string in reverse 
 * @s: string
 * Return: 1 void
*/

void print_rev(char *s)
{
	if (!*s)
{
		_putchar('\n');
}
		print_rev(s + 1);
		_putchar(*s);
}

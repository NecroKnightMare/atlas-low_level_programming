#include "main.h"
#include <stdio.h>

/**
 * print_rev - print string in reverse 
 * @s: string
 * Return: 1 void
*/

void print_rev(char *s)
{
	while (*s != '\0')
{
		s--;
		_putchar(*s);
}
}

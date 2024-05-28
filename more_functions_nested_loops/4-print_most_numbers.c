#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - 0-9 not 2 or 4 
 * @: no parameters
 * Return: 1 void
*/

void print_most_numbers(void)
{
	int c;
	for (c = 0; c <=9; c++)
{
		if (c == 2 || c == 4)
{
				continue;
}
	_putchar(c);
}
}

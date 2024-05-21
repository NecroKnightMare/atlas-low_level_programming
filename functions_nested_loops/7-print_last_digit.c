#include "main.h"

/**
 * print_last_digit - void
 * @: no parameters
 *
 * Description: print alpha in lower with new line
 * Return: Always success (0)
**/
int print_last_digit(int)
{
	int last_digit = n % 10;

	if (last_digit < 0)
{
		last_digit *= -1;
}
	_putchar(last_digit + '0');
	return (last_digit;
}

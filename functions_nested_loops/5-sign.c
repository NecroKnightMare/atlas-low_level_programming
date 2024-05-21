#include "main.h"

/**
 * print_sign - void
 * @n: signs
 *
 * Description: print alpha in lower with new line
 * Return: Always success (0)
**/
int print_sign(int n)
{
	if (n > 0)
{
		_putchar('+');
		return (1);
}
	else if (n == 0)
{
		_putchar('0');
		return (0);
}
	else
{
		_putchar('-');
		return (-1);
}
}

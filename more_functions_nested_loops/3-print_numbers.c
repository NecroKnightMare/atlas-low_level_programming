#include "main.h"

/**
 * print_numbers: void
 * @: no parameters
 *
 * Description: print 0-9 followed by new line
 * Return: void 1
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
{
		_putchar(i + '0');
}
	_putchar('\n');
}

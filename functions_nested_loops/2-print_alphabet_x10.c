#include "main.h"

/**
 * print_alphabet_10x - void
 * @: no parameters
 *
 * Description: print alpha ten times
 * Return: Always success (0)
**/

void print_alphabet_x10(void)
{
	int i = 0;
	char l = 'a';

	while (i++ <= 9)
{
		for (l = 'a'; l <= 'z'; ++l)
{
			_putchar(l);
}
		_putchar('\n');
}
}

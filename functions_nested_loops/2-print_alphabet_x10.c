#include "main.h"

/**
 * main - void
 * @: no parameters
 *
 * Description: print alpha ten times
 * Return: Always success (0)
**/

void print_alphabet_x10(void)
{
	char letter;
	for (int i = 0; i < 10; ++i)
{
		for (letter = 'a'; letter <= 'z'; ++letter)
{
			_putchar(letter);
}
		_putchar('\n');
}
}

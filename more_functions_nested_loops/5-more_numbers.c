#include "main.h"

/**
 * more_numbers - repeat 0-14 10 times
 * @: no parameters
 * Return: 1 void
*/

void more_numbers(void)
{
	int i;
	int j;
	for (i = 0; i <= 9; i++)

{
		for (j = 0; j <= 14; j++)
{
			if (j > 9)
{
				_putchar((j / 9) + '0');
}
			_putchar((j % 10) + '0');
}
		_putchar('\n');
}
}

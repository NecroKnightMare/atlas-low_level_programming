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
	for (i = 0; i <=14; i++)
{
		for (j = 0; j <= 10; j++)
{
			if (j > 10)
{
				_putchar((j / 10) + '0');
}
			_putchar((j % 10) + '0');
}
		_putchar('\n');
}
}

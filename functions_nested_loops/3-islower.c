#include "main.h"

/**
 * _islower - checks if a letter is lowercase
 * @: no parameters
 *
 * Description: print 
 * Return: Always success (0)
**/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
{
		return (1);
}
	else
{
		_putchar('\n');
		return (0);
}
}

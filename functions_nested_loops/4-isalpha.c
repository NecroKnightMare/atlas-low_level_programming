#include "main.h"

/**
 * _isalpha - void
 * @: no parameters
 *
 * Description: print alpha in lower with new line
 * Return: Always success (0)
**/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >='A' && c <= 'Z'))
{
		return (1);
}
	else
{
		_putchar('\n');
		return (0);
}
}

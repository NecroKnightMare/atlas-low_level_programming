#include "main.h"
/**
 * _pow_recursion - power of
 * @x: variable
 * @y: variable
 * Return: -1 if y is negative
**/
int _pow_recursion(int x, int y)
{
	if (y < 0)
{
		return (-1);
}

	else
{
		return (x * (x - 1));
}
	return (0);
}

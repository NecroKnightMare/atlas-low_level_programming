#include "main.h"
/**
 * factorial - factorial
 * @n: array
 * Return: 0
**/
int factorial(int n)
{
	if (n < 0)
{
		return (-1);
}
	if (n == 1)
{
		return (n * factorial(n - 1));
}
	return (0);
}

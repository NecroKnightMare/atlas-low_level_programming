#include <stdio.h>
#include "main.h"

/**
 * _putchar - print
 * @c: characters
 * Return: 0 success
*/

int _putchar(char c)
{
	int i;
	int _putchar(char c);
	
	for (i =1; i <= 100; i++)
{
		if ((i % 3 == 0) && (i % 5 == 0))
{
			printf("FizzBuzz ");
}
		else if (i % 3 == 0)
{
			printf("Fizz ");
}
		else if (i % 5 == 0)
{
			printf("Buzz ");
}
		else
			_putchar(' ');
}
	return (0);
}

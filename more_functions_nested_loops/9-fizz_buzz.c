#include "main.h"
#include <stdio.h>
/**
 * main - void
 * @: no parameters
 * Return: 0 success
*/

int main(void)
{
	int i;

	for (i =1; i <= 100; i++)
{
		if ((i % 3 == 0) && (i % 5 == 0))
{
			printf("FizzBuzz\t");
}
		else if (i % 3 == 0)
{
			printf("Fizz\t");
}
		else if (i % 5 == 0)
{
			printf("Buzz\t");
}
		else
			_putchar('\t');
}
	return (0);
}

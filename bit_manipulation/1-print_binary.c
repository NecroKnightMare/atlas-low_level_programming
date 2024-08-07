#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *print_binary - print into binary
 *@n: value
 *Returns: 1 if it worked, or -1 if an error occurred
**/
void print_binary(unsigned long int n)
{
	unsigned long int size;
	int b;

	size = (sizeof(n) * 8 - 1);

	if (n == 0)
{
		_putchar('0');
}
	if (n == 1)
{
		_putchar('1');
}
	while (size)
{
		b = ((n >> size) & 1);
		if (b == '1')
{
			_putchar(b + '0');
}
		size -= 1;
}
}

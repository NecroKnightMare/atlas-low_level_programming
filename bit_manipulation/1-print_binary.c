#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 *
**/
void print_binary(unsigned long int n)
{
	unsigned long int size;
	int i;
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
	while (size >= 0)
{
		b = ((n >> size) & 1);
		if (b == '1')
{
			_putchar(b + '0');
}
		size -= 1;
}

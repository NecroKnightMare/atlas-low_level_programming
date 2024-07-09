#include <stdio.h>
#include "main.h"
/**
 *flip_bits - flip int to bits
 *@n: value 1
 *@m: value 2
 *Return: bits
**/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = 0;
	unsigned long int i = 0;
	unsigned long int size;

	size = (sizeof(n) * 8 - 1);/**copied again from file 1**/

	while (i <= size)
{
		if ((n != 0) && (m != 0))
{
			bits++;
}
		n = n >> 1;
		m = m >> 1;
		i++;
}
	return (bits);
}

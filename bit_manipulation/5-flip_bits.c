#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 *
**/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = 0;
	unsigned long int i = 0;
	unsigned long size;

	size = (sizeof(n) * 8 - 1);/**copied again from file 1**/

	while (i <= size)
{
		if ((!n == 0) && (!m == 0))
{
			bits++;
}
		n = n >> 1;
		m = m >> 1;
		i++;;
}
	return (bits);
}

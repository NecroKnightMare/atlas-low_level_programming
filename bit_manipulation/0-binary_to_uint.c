#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
**/
unsigned int binary_to_uint(const char *b)
{
	unsigned int pos = 0;
	unsigned int i = 0;

	if (b == NULL)
{
		return (0);
}
	while (b[i] != '\0')
{
		i++;
		if (b[i] == '1')
{
		pos = (pos << 1) | 1;
}
			else if (b[i] == '0')
{
				pos <<= 1;
}
			else if (b[i] != '0' && b[i] != '1')
{
				i++;
				return (0);
}
}
	return (pos);
}

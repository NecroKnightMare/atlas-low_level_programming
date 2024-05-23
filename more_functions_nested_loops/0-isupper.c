#include "main.h"
#include <stdio.h>

/**
 * _isupper - ret one if c is upper
 * @c: character parameter
 * Return: 1 if c and 0 if success
*/

int _isupper(int c)
{
	if ((c >= 'a' && c <= 122) || (c >= 'A' && c <= 90))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

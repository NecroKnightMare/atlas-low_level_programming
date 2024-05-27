#include <stdio.h>
#include "main.h"

/**
 * _isupper - ret one if c is upper
 * @c: character parameter
 * Return: 1 if c and 0 if success
*/

int _isupper(int c)
{
	for (c = 65 ; c <= 90; c++)
	{
		return 1;
	}
	return 0;
}

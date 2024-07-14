#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 *key_index - gets index of a key
 *@key: key value in hash table
 *@size: size of array
 *Return: index in key/value format
**/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int format;

	if (!key || size == 0)
{
		return (0);
}
	format = hash_djb2(key);

	return (format % size);
}

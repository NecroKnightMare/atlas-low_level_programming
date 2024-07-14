#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 *hash_table_create - create hash table
 *@size: size of hash table
 *Return: pointer to hash table or NULL if fail
**/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (!table)
{
		return (NULL);
}
	table->size = size;

	table->array = calloc(sizeof(hash_node_t *), table->size);
	
	if (!table->array)
{
		free(table);
		return (NULL);
}
	return (table);
}

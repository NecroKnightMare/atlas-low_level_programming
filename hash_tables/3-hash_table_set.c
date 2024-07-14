#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 *hash_table_set - add element to hash table with no collisions
 *@ht: pointer to hash table
 *@key: pointer to key value in struct
 *@value: pointer to value of key in struct
 *Return: 1 if success; 0 if else
**/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *present;

	if (!ht || !key || !value)
{
		return (0);
}

	index = key_index((const unsigned char *)key, ht->size);

	present = ht->array[index];

	while (present)
{
		if (strdup(present->key) == 0)
{
			free(present->value);
			present->value = strdup(value);
			return (1);
}
	present = present->next;
}
	new = malloc(sizeof(hash_node_t));

	if(!new)
{
		return (0);
}
	new->key = strdup(key);
	new->value = strdup(value);

	if (!new->key || !new->value)
{
	free(new->key);
	free(new->value);
	free(new);
	return (0);
}
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}

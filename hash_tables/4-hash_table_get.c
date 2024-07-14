#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 *hash_table_get - retrieves value associated with key
 *@ht: pointer to hash table
 *@key: pointer to key value in hash table
 *Return: value associated with element or NULL if key not found
**/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int inx;
	hash_node_t *temp;

	if (!key || !ht)
{
		return (NULL);
}
	inx = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[inx];
	
	while (temp != NULL && strcmp(temp->key, key) != 0)
{
		temp = temp->next;
}
	if (temp == NULL)
{
		return (NULL);
}

	return (temp->value);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 *hash_table_delete - delete all of hash table
 *@ht: pointer to hash table
 *Return: void
**/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int inx = 0;
	struct hash_node_s *temp;

	while (inx < ht->size)
{
	inx++;
	while (ht->array[inx])
{
		temp = ht->array[inx];
		ht->array[inx] = ht->array[inx]->next;
		free(temp->key);
		free(temp->value);
		free(temp);
}
}
	free(ht->array);
	free(ht);
}



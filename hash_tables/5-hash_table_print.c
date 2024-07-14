#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 *hash_table_print - print has table keys and values
 *@ht: pointer to hash table
 *Return: void
**/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i =0;
	struct hash_node_s *temp;

	while (i < ht->size)
{
		i++;
	if (!ht)
{
		return;
}
	else
{
		temp = ht->array[i];
}
		while (temp != NULL)
{
			printf("'%s': '%s', ", temp->key, temp->value);
			temp = temp->next;
}
}
	printf("}\n");
}

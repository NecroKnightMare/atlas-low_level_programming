#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/*go through and test to see if its accurate--reveerse string function needs work*/
/*gcc -o 100-sorted_hash_table_0 -Wall -Werror -Wextra -pedantic -std=gnu89 1-djb2.c 2-key_index.c 100-sorted_hash_table.c main_0.c*/

/**
*Description:
*
*
*Return: 
*
*/

shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *table = malloc(sizeof(shash_table_t));

	if (!table)
{
		return (NULL);
}
	table->size = size;

	table->array = calloc(table->size, sizeof(shash_node_t *));

	if (!table->array)
{
		free(table);
		return (NULL);
}
	return (table);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new, *present;

	if (!ht || !key || !value)
{
		return (0);
}

	index = key_index((const unsigned char *)key, ht->size);

	present = ht->array[index];

	while (present)
{
		if (strcmp(present->key, key) == 0)
{
			free(present->value);
			present->value = strdup(value);
			return (1);
}
	present = present->next;
}
	new = malloc(sizeof(shash_node_t));

	if (!new)
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
	/*Testing*/
	/*printf("Inserted: '%s': '%s'\n", new->key, new->value);*/
	return (1);
}

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int inx;
	shash_node_t *temp;

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

void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i =0;
	struct shash_node_s *temp;

	for (i = 0; i < ht->size; i++)
	{ 
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

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	if (!ht)
	{
		return;
	}

	printf("{");
	temp = ht->stail;

	while (temp)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		if (temp->sprev) printf(", ");
		temp = temp->sprev;
	}
	printf("}\n");
}


void shash_table_delete(shash_table_t *ht)
{
	unsigned long int inx = 0;
	struct shash_node_s *temp;

for (inx = 0; inx < ht->size; inx++)
	{
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

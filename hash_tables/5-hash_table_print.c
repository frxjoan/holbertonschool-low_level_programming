#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_print - creates a hash table
 * @ht: key
 * Return: pointer to the new table, or NULL on failure
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, first = 1;
	hash_node_t *tmp;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			first = 0;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}

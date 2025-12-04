#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_get - creates a hash table
 * @ht: key
 * @key: key
 *
 * Return: pointer to the new table, or NULL on failure
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int hkey;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (NULL);

	hkey = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[hkey];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

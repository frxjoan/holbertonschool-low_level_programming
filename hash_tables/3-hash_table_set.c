#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * key_index - creates a hash table
 * @key: key
 * @size: size of the array
 *
 * Return: pointer to the new table, or NULL on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int hkey;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || key[0] == '\0' || value == NULL)
		return (0);

	hkey = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[hkey];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (tmp->value != NULL);
		}
		tmp = tmp->next;
	}
	addnode(&ht->array[hkey], key, value);
	return (1);
}

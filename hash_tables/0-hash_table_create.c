#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the new table, or NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *dict = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (dict == NULL || size == 0)
		return (NULL);

	dict->size = size;
	dict->array = malloc(sizeof(hash_node_t *) * size);
	if (dict->array == NULL)
	{
		free(dict);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		dict->array[i] = NULL;

	return (dict);
}

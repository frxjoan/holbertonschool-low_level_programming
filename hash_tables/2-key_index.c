#include "hash_tables.h"
#include <stdlib.h>

/**
 * key_index - creates a hash table
 * @key: key
 * @size: size of the array
 *
 * Return: pointer to the new table, or NULL on failure
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

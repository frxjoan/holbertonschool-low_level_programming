#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * addnode - singly linked list
 * @head: string - (malloc'ed string)
 * @key: string - (malloc'ed string)
 * @value: string - (malloc'ed string)
 * Return: size
 */
hash_node_t *addnode(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	node->value = strdup(value);

	if (!node->key || !node->value)
	{
		free(node->key);
		free(node->value);
		free(node);
		return (NULL);
	}
	node->next = *head;
	*head = node;
	return (node);
}

/**
 * hash_table_set - creates a hash table
 * @ht: key
 * @key: key
 * @value: size of the array
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

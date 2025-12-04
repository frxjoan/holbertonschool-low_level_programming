#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - singly linked list
 * @head: string - (malloc'ed string)
 * @str: string - (malloc'ed string)
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

#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - doubly linked list
 * @h: integer
 * @idx: i
 * @n: i
 * Return: dlistinct
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *node = malloc(sizeof(dlistint_t)), *tmp = *h;

	if (*h == NULL || node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = *h;
		node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = node;
		*h = node;
		return (node);
	}
	while (tmp != NULL && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
	{
		free(node);
		return (NULL);
	}
	node->prev = tmp;
	node->next = tmp->next;
	tmp->next = node;
	if (node->next != NULL)
		node->next->prev = node;
	return (node);
}

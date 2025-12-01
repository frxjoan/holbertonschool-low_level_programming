#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - check the code
 * @head: d
 * @n: d
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = node;
		node->prev = tmp;
	}
	return (node);
}

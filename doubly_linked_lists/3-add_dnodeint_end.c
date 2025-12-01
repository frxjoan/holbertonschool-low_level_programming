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
	node->prev = *head;
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = node;
	}
	return (node);
}

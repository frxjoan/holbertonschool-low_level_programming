#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - check the code
 * @head: d
 * @n: d
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	if (*head == NULL)
	{
		*head = node;
		node->prev = NULL;
		node->next = NULL;
		return (node);
	}
	node->prev = NULL;
	node->next = *head;
	(*head)->prev = node;
	*head = node;
	return (node);
}

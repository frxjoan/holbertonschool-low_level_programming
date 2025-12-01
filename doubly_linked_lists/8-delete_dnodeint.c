#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - doubly linked list
 * @head: integer
 * @index: i
 * Return: dlistinct
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next != NULL)
			(*head)->next->prev = NULL;
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (tmp != NULL && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
	{
		return (-1);
	}
	tmp->prev->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}

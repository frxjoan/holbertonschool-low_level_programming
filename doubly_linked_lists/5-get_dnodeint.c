#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - doubly linked list
 * @head: integer
 * @index: points to the previous node
 * Return: dlistinct
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (index == i)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}

#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - doubly linked list
 * @head: integer
 * Return: dlistinct
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int i = 0, sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
		i++;
	}
	return (sum);
}

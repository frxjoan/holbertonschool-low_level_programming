#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - singly linked list
 * @head: string - (malloc'ed string)
 * Return: size
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
	{
		while (tmp != NULL)
		{
			tmp = head->next;
			free(head);
			head = tmp;
		}
	}
}

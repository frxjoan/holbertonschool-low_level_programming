#include "lists.h"
#include <stdlib.h>
/**
 * free_list - singly linked list
 * @head: string - (malloc'ed string)
 * Return: size
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if (head != NULL)
	{
		while (tmp != NULL)
		{
			tmp = head->next;
			free(head->str);
			free(head);
			head = tmp;
		}
	}
}

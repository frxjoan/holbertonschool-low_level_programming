#include "main.h"
/**
 * list_len - singly linked list
 * @h: string - (malloc'ed string)
 * Return: size
 */
size_t list_len(const list_t *h)
{
	int num_node = 0;

	while (h != NULL)
	{
		num_node += 1;
		h = h->next;
	}
	return (num_node);
}

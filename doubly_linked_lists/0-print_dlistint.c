#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - check the code
 * @h: d
 * Return: Always EXIT_SUCCESS.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int len_node = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		len_node += 1;
		h = h->next;
	}
	return (len_node);
}

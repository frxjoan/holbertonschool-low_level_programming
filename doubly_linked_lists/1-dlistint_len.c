#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - check the code
 * @h: d
 * Return: Always EXIT_SUCCESS.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		len += 1;
		h = h->next;
	}

	return (len);
}

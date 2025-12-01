#include "main.h"
#include <stdio.h>
/**
 * print_list - singly linked list
 * @h: string - (malloc'ed string)
 * Return: size
 */
size_t print_list(const list_t *h)
{
	int num_node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] ", h->len);
			printf("%s\n", h->str);
		}
		num_node += 1;
		h = h->next;
	}
	return (num_node);
}

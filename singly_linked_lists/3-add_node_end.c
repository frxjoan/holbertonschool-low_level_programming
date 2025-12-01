#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - singly linked list
 * @head: string - (malloc'ed string)
 * @str: string - (malloc'ed string)
 * Return: size
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = *head;
	int i, lenn = 0;
	list_t *neuneu = malloc(sizeof(list_t));

	if (neuneu == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		lenn += 1;
	neuneu->str = strdup(str);
	neuneu->len = lenn;
	neuneu->next = NULL;
	if (*head == NULL)
		*head = neuneu;
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = neuneu;
	}
	return (neuneu);
}

#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - singly linked list
 * @head: string - (malloc'ed string)
 * @str: string - (malloc'ed string)
 * Return: size
 */
list_t *add_node(list_t **head, const char *str)
{
	int i, lenn = 0;
	list_t *neuneu = malloc(sizeof(list_t));

	if (neuneu == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		lenn += 1;
	neuneu->str = strdup(str);
	neuneu->len = lenn;
	neuneu->next = *head;
	*head = neuneu;
	return (neuneu);
}

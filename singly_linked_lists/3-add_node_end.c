#include "lists.h"

/**
 * *add_node_end - function that adds a new node at the end of a list.
 * @head: pointer const lis_t
 * @str: const char pointer
 * Return: prints all the elements of a list_t list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *last = (*head);

	int i;

	for (i = 0; str[i]; i++)
	{
	}

	node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->str = strdup(str);
	node->len = i;
	node->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = node;
		return (node);
	}
	while (last->next != NULL)
		last = last->next;

	last->next = node;
	return (node);
}

#include "lists.h"

/**
 * *add_node - function new node at the beginning of a list.
 * @head: pointer const lis_t
 * @str: const char pointer
 * Return: prints all the elements of a list_t list.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
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
	node->next = *head;
	*head = node;

	return (node);
}

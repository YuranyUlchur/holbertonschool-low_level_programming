#include "lists.h"

/**
 * add_nodeint_end - function hat adds a new node
 * @head: pointer const listint_t
 * @n: const integer
 * Return: prints all the elements of a list_t list.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *last = *head;

	node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
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

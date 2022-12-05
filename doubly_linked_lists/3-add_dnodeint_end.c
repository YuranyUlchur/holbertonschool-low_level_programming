#include "lists.h"

/**
 * add_dnodeint_end - function hat adds a new node
 * @head: pointer const listint_t
 * @n: const integer
 * Return: prints all the elements of a list_t list.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *last = *head;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head)
	{
		while (last->next != NULL)
			last = last->next;
		node->prev = last;
		last->next = node;
	}
	else
	{
		node->prev = NULL;
		*head = node;
	}
	return (node);
}

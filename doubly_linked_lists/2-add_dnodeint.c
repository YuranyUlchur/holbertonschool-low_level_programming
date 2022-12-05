#include "lists.h"

/**
 * *add_dnodeint - function adds a new node
 * @head: pointer dlistint_t
 * @n: const interger
 * Return: return dlistint_t
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	if (head)
		node->next = *head;
	if (*head)
		(*head)->prev = node;
	else
	{
		node->next = NULL;
	}
	*head = node;

	return (node);
}

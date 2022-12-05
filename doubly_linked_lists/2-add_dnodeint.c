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

	node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;
	if (!head)
		head = &node;
	if (!(*head))
		*head = node;
	else
	{
		node->next = *head;
		*head = node;
	}
	return (node);
}

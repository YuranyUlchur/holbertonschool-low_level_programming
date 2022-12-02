#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: pointer listint_t
 * Return: return integer
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head)
		return (0);

	n = (*head)->n;

	node = (*head)->next;

	free(*head);
	*head = node;
	return (n);
}

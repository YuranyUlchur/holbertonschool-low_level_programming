#include "lists.h"

/**
 * *add_nodeint - function adds a new node
 * @head: pointer listint_t
 * @n: const interger
 * Return: return listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *node;

	node = (listint_t *)malloc(sizeof(listint_t));

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

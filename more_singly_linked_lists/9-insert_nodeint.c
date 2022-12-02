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

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: pointer listint_t
 * @idx:  is the index of the list where the new node
 * @n: integer
 * Return: return listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *aux = *head;
	unsigned int i = 0, j = 0;

	while (aux)
	{
		j++;
		aux = aux->next;
	}
	if (!*head && idx != 0)
		return (NULL);
	if (j < idx)
		return (NULL);

	node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	aux = *head;
	if (idx == 0)
		return (add_nodeint(head, n));
	aux = *head;
	while (i < idx - 1)
	{
		aux = aux->next;
		i++;
	}

	node->next = aux->next;
	aux->next = node;

	return (node);
}

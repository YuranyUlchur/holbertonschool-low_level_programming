#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: pointer listint_t
 * Return: return integer
 */
int pop_listint(listint_t **head)
{
	listint_t *node = *head;
	int n;

	while (node != NULL)
	{
		n = node->n;
		node = node->next;
		break;
	}
	*head = node;
	return (n);
}

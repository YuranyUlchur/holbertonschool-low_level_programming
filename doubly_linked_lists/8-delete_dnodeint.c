#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * @head: pointer dlistint_t
 * @index:  is the index of the list where the new node
 * Return: return integer
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i = index;

	node = *head;

	while (i > 0 && node != NULL)
	{
		node = node->next;
		i--;
	}
	if (node == NULL)
		return (-1);
	if (node->next != NULL)
		node->next->prev = node->prev;
	if (node->prev != NULL)
		node->prev->next = node->next;
	if (index == 0)
		*head = node->next;

	free(node);
	return (1);
}

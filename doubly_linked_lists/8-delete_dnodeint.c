#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * @head: pointer dlistint_t
 * @index:  is the index of the list where the new node
 * Return: return integer
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t  *node = *head, *aux;
	unsigned int i = 0;

	if (node == NULL)
		return (-1);
	if (index == 0)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	else
	{
		while (i < index - 1)
		{
			if (node == NULL)
				return (-1);

			node = node->next;
			i++;
		}

	}

	return (1);
}

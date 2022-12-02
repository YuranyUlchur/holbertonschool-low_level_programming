#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: pointer listint_t
 * @index:  is the index of the list where the new node
 * Return: return integer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head, *aux;
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
		aux = node->next;
		node->next = aux->next;
		free(aux);
	}

	return (1);
}

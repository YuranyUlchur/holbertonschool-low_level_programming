#include "lists.h"

/**
 * *get_nodeint_at_index - that returns the nth node of a linked list
 * @head: pointer listint_t
 * @index: const interger
 * Return: return listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;

	unsigned int count = 0;

	while (count != index)
	{
		if (current == NULL)
		{
			return (NULL);
		}

		current = current->next;
		count++;
	}
	return (current);
}

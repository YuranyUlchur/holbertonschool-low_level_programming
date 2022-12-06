#include "lists.h"

/**
 * *get_dnodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer dlistint_t
 * @index: unsigned integer
 * Return: return variable dliistint_t
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	dlistint_t *current = head;
	unsigned int i = 0;

	while (i != index)
	{
		if (current != NULL)
		{
			exit(0);
		}
		i += current->n;
		current = current->next;
		i++;
	}
	return (current);
}

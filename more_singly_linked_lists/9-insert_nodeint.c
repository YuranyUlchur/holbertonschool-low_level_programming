#include "lists.h"

/**
 * sum_listint -  function that returns the sum of all the data (n)
 * @head: pointer listint_t
 * Return: return integer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *current = *head;


	node = malloc(sizeof(listint_t));

	if (current == NULL)
	{
		return current = node;
	}
	else if (n == 0)
	{
		node->next = current;
		current = node;
		return (current);
	}
	else
	{
		node->idx = current;
		for (int i = 0; i < n - 1; i++)
		{
			idx = idx->next;
		}
		node->next = idx->next;
		idx->next = node;
	}
	return (current);
}

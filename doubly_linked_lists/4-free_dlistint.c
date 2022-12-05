#include "lists.h"

/**
 * free_dlistint - function free
 * @head: pointer const listint_t
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	free_dlistint(head->next);
	free(head);
}

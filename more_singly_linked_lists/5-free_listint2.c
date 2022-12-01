#include "lists.h"

/**
 * free_listint2 - function free list
 * @head: pointer const listint_t
 */

void free_listint2(listint_t **head)
{

	if (head == NULL)
		return;

	if (*head == NULL)
		return;

	free_listint2(&(*head)->next);
	free(*head);
	*head = NULL;
}

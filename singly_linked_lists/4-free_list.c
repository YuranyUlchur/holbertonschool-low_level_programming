#include "lists.h"

/**
 * free_list - function that frees a list_t
 * @head: pointer const lis_t
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}

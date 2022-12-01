#include "lists.h"

/**
 * sum_listint -  function that returns the sum of all the data (n)
 * @head: pointer listint_t
 * Return: return integer
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int suma = 0;

	while (current != NULL)
	{

		suma += current->n;
		current = current->next;

	}
	return (suma);
}

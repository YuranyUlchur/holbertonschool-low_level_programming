#include "lists.h"

/**
 * sum_dlistint -  function that returns the sum of all the data (n)
 * @head: pointer listint_t
 * Return: return integer
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int suma = 0;

	while (current != NULL)
	{

		suma += current->n;
		current = current->next;

	}
	return (suma);
}

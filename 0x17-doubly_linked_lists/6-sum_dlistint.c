#include "lists.h"
/**
 * sum_dlistint   - obtener
 * @head: dlistint_t
 * Return: 0
 */
int sum_dlistint(dlistint_t *head)
{
	int i;
	int sum = 0;
	dlistint_t *current = head;

	if (current == NULL)
		return (0);

	for (i = 0; current != NULL; i++)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

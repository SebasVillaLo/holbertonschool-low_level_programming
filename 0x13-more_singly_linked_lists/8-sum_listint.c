#include "lists.h"
/**
 * sum_listint - Suma
 * @head: Cabeza
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}

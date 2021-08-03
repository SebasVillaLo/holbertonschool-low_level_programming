#include "lists.h"
/**
 * sum_listint - Suma
 * @head: Cabeza
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int save, o  = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		save += head->n;
		o += save;
		head = head->next;
	}
	return (s);
}

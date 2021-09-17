#include "lists.h"
/**
 * get_dnodeint_at_index   - obtener
 * @head: const
 * @index: int
 * Return: 0
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	if (head != NULL)
	{
		while (current != NULL)
		{
			if (i == index)
				return (current);

			current = current->next;
			i++;
		}
	}
	return (NULL);
}

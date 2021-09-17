#include "lists.h"
/**
 * free_dlistint   - longitud
 * @head: const:
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *tmp = NULL;

	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
}

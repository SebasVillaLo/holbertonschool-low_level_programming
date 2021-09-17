#include "lists.h"
/**
 * add_dnodeint_end   - add
 * @head: const:
 * @n: const:
 * Return: 0
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL, *current = NULL;

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	if (*head != NULL)
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;

		node->next = NULL;
		node->prev = current;
		current->next = node;
		return (node);
	}
	node->next = *head;
	node->prev = NULL;
	*head = node;
	return (*head);
}

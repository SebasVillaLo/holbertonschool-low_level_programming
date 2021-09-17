#include "lists.h"
/**
 * add_dnodeint   - add
 * @head: const:
 * @n: const:
 * Return: 0
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (*head != NULL)
	{
		node->next = *head;
		node->prev  = (*head)->prev;
		(*head)->prev = node;
		*head = node;
		return (*head);
	}
	node->next = *head;
	node->prev  = NULL;
	(*head) = node;
	return (*head);
}

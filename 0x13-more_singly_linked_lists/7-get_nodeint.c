#include "lists.h"
/**
 * get_nodeint_at_index - devuelva el enesimo nodo
 * @head: cabeza de lista
 * @index: index
 * Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 1; i <= index; i++)
	{
	if (head == NULL)
	{
	return (NULL);
	}
	head = head->next;
	}
	return (head);
	}

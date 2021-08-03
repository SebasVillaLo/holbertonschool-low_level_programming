#include "lists.h"
/**
 * add_nodeint_end - Agregar un nodo al final
 * @head: the head of the list
 * @n: const
 * Return: h
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node;
	listint_t *h = *head;

	if (head == NULL)
	{
		return (NULL);
	}
	end_node = malloc(sizeof(listint_t));

	if (end_node == NULL)
	{
		return (NULL);
	}
	end_node->n = n;
	end_node->next = NULL;
	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}
	while (h->next != NULL)
	{
		h = h->next;
	}
	h->next = end_node;
	return (h);
}

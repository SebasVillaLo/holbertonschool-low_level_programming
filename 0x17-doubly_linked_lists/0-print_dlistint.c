#include "lists.h"
/**
 * print_dlistint - imprimir lista
 * @h: const pointer
 * Return: 0
 */
size_t print_dlistint(const dlistint_t *h)
{
	int length;

	for (length = 0; h != NULL; length++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (length);
}

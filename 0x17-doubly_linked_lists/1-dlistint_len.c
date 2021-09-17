#include "lists.h"
/**
 * dlistint_len   - longitud
 * @h: const:
 * Return: 0
 */
size_t dlistint_len(const dlistint_t *h)
{
	int length;

	for (length = 0; h != NULL; length++)
	{
		h = h->next;
	}
	return (length);
}

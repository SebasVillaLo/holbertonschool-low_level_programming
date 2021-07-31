#include "lists.h"
/**
 * list_len - numero de elementos
 * @h: const
 * Return: elementos
 */
size_t list_len(const list_t *h)
{
	size_t j = 0;
	while (h != NULL)
	{
		j++;
		h = h->next;
	}
	return (j);
}

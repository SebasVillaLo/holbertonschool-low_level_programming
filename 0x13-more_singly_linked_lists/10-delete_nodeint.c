#include "lists.h"
/**
 * delete_nodeint_at_index - eliminar nodo
 * @head: cabeza
 * @index: index
 * Return: old
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux, *old;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (NULL);
	aux = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(aux);
		return (1);
	}
	while (i < index - 1)
	{
		if (aux == NULL)
		{
			return (NULL);
		}
		aux = aux->next;
		i++;
	}
	old = aux->next;
	aux->next = old->next;
	free(old);
	return (1);

}

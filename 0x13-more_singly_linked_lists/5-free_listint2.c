#include "lists.h"
/**
 * free_listint2 - liberar memoria
 * @head: puntero del puntero de la cabeza de la lista
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	while ((*head)->next != NULL)
	{
		aux = (*head)->next;
		free(*head);
		*head = aux;
	}
	free(*head);
	*head = NULL;
}

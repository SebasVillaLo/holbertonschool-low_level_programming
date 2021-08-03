#include "lists.h"
/**
 * free_listint - liberar memoria de la lista de la lista
 * @head: inicio de la lista
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}

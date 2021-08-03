#include "lists.h"
/**
 * pop_listint - borrar el nodo inicial de la list
 * @head: puntero del puntero de la cabeza de la lista
 * Return: n
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *aux;

	if (*head == NULL || head == NULL)
	{
		return (0);
	}

	n = (*head)->n;
	aux = *head;
	*head = (*head)->next;
	free(aux);
	return (n);
}

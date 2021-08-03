#include "lists.h"
/**
 * add_nodeint - agregar nuevo nodo
 * @head: Cabeza
 * @n: const
 * Return: head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *N_nodo;
	int i = 0;
	const int *p = &n;

	N_nodo = malloc(sizeof(listint_t));

	if (N_nodo == NULL)
	{
	return (NULL);
	}
	for (i = 0; p[i] != '\0'; i++)
	;
	N_nodo->next = (*head);
	(*head) = N_nodo;



	return (*head);
}
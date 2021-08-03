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

	if (head == NULL || n == 0)
	{
		return (NULL);
	}

	N_nodo = malloc(sizeof(listint_t));

	if (N_nodo == NULL)
	{
		return (NULL);
	}
  /* asigna el valor de n del main a la n de estructura */
	N_nodo->n = n;
  /* asigna head como nodo siguiente */
	N_nodo->next = (*head);
  /* asigna la cabecera como el nuevo nodo */
	(*head) = N_nodo;

	return (*head);
}

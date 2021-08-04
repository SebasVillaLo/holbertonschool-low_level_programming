#include "lists.h"
/**
 * insert_nodeint_at_index - insertar nodo en posicion espesifica
 * @head: cabeza
 * @idx: indice de la lista
 * @n: valor
 * Return: 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *aux, *new_nodo;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	aux = *head;
	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && aux != NULL; i++)
		{
			aux = aux->next;
		}
	}
	if (aux == NULL && idx != 0)
	{
		return (NULL);
	}

	new_nodo = malloc(sizeof(listint_t));
	if (new_nodo == NULL)
	{
		return (NULL);
	}
	new_nodo->n = n;
	if (idx == 0)
	{
		new_nodo->next = *head;
		*head = new_nodo;
	}
	else
	{
		new_nodo->next = aux->next;
		aux->next = new_nodo;
	}
	}
	return (new_nodo);
}

#include "lists.h"
/**
 * delete_dnodeint_at_index - Elimina el nodo en el índice
 * de índice de una lista vinculada dlistint_t.
 * @head: doble puntero a la lista
 * @index: index donde se eliminara el nodo
 * Return:1 si funciona, -1 si falla
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temporal = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (temporal == NULL)
			return (-1);
		temporal = temporal->next;
	}

	if (temporal == *head)
	{
		*head = temporal->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		temporal->prev->next = temporal->next;
		if (temporal->next != NULL)
			temporal->next->prev = temporal->prev;
	}

	free(temporal);
	return (1);
}

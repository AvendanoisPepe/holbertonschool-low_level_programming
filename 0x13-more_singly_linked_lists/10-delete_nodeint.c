#include "lists.h"
/**
 *  delete_nodeint_at_index - Elimina un nodo de listint_t en un indice
 * definido.
 * @head: Puntero a listint_t.
 * @index: Indice a eliminar.
 * Return:1 si sirve -1 si falla.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *Temporal = *head;
	listint_t *Eliminado = NULL;
	unsigned int contador = 0;

	if (*head == NULL)
	{
		return (.1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(Temporal);
		return (1);
	}

	for (; contador < (index - 1); contador++)
	{
		Temporal = Temporal->next;
		if (Temporal == NULL)
		{
			return (-1);
		}
	}
	Eliminado = Temporal->next;
	Temporal->next = Eliminado->next;
	free(Eliminado);
	return (1);
}

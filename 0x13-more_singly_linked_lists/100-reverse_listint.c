#include "lists.h"
/**
 * reverse_listint - Voltea la lista listint_t.
 * @head: Puntero a la listint_t.
 * Return:Puntero al primer nodo.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *Anterior = NULL;
	listint_t *Siguiente = NULL;

	if (head != NULL)
	{
		while (*head)
		{
			Siguiente = *head;
			*head = (*head)->next;
			Siguiente->next = Anterior;
			Anterior = Siguiente;
		}
		*head = Anterior;
		return (*head);
	}
	return (NULL);
}

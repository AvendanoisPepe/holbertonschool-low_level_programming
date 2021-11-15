#include "lists.h"
/**
 * pop_listint - Elimina el nodo principal de listint_t.
 * @head: Puntero a la primera posicion de listint_t.
 * Return: El valor del nodo eliminado.
 */
int pop_listint(listint_t **head)
{
	listint_t *Temporal;
	int guardar;

	Temporal = *head;

	if (Temporal == NULL)
	{
		return (0);
	}

	*head = Temporal->next;
	guardar = Temporal->n;
	free(Temporal);
	return (guardar);
}

#include "lists.h"
/**
 * free_listint2 - Libera una lista y deja el encabezado como null.
 * @head: Puntero a listint_t
*/
void free_listint2(listint_t **head)
{
	listint_t *Temporal;
	listint_t *Nuevo;

	Nuevo = *head;

	if (head == NULL)
	{
		return;
	}

	while (Nuevo != NULL)
	{
		Temporal = Nuevo;
		Nuevo = Nuevo->next;
		free(Temporal);
	}
	*head = NULL;
}

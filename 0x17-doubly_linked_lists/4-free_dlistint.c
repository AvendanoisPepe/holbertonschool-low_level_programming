#include "lists.h"
/**
 * free_dlistint - Libera la lista
 * @head: puntero a la lista.
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		dlistint_t *temporal;

		while (head)
		{
			temporal = head->next;
			free(head);
			head = temporal;
		}
	}
}

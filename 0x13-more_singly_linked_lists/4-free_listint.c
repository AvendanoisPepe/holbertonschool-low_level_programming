#include "lists.h"
/**
 *  free_listint - Libera nuestra listint_t.
 * @head: Puntero a nuestra listint_t.
*/
void free_listint(listint_t *head)
{
	listint_t *Temporal;

	if (head == NULL)
	{
		return;
	}

	for (; head; Temporal++)
	{
		Temporal = head->next;
		free(head);
		head = Temporal;
	}
}

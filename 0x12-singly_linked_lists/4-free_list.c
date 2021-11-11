#include "lists.h"
/**
 * free_list -Libera nuestra lista vinculada.
 * @head:la lista que se libera: list_t.
 */
void free_list(list_t *head)
{
	list_t *Temporal ;

	for (; head; Temporal++)
	{
		Temporal = head->next;
		free(head->str);
		free(head);
		head = Temporal;
	}
}

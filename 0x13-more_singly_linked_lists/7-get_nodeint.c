#include "lists.h"
/**
 * get_nodeint_at_index - De vuelve un nodo de listint_t.
 * @head:Puntero a listint_t.
 * @index: Nodo a buscar en listint_t.
 * Return:El nodo que buscamos o nul si falla.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int iterador = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	for (; iterador < index; iterador++)
	{
		head = head->next;

		if (head == NULL)
		{
			return (NULL);
		}
	}
	return (head);
}

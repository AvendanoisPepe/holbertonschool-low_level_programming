#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserta un nuevo nodo en una posición determinada.
 * @h: Puntero a la lista.
 * @idx: Indice del nodo a insertar
 * @n:valor del nodo
 * Return: lista enlazada.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temporal = *h, *nuevo;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		temporal = temporal->next;
		if (temporal == NULL)
			return (NULL);
	}

	if (temporal->next == NULL)
		return (add_dnodeint_end(h, n));

	nuevo = malloc(sizeof(dlistint_t));
	if (nuevo == NULL)
		return (NULL);

	nuevo->n = n;
	nuevo->prev = temporal;
	nuevo->next = temporal->next;
	temporal->next->prev = nuevo;
	temporal->next = nuevo;

	return (nuevo);
}

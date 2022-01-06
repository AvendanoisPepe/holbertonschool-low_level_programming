#include "lists.h"
/**
 * dlistint_len - Retorna la cantidad de elementos de la lista
 * @h: Puntero a la lista
 * Return: Numero de nodos
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodos = 0;

	for (; h; nodos++)
	{
		h = h->next;
	}

	return (nodos);
}

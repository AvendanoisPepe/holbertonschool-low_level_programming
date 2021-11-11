#include "lists.h"
/**
 * list_len - Devuelve el numero de elementos de una lista  vinculada.
 * @h:Puntero a la lista vinculada.
 * Return:Iterador;
 */
size_t list_len(const list_t *h)
{
	int iterador = 0;

	for (; h; iterador++)
	{
		h = h->next;
	}
	return (iterador);
}

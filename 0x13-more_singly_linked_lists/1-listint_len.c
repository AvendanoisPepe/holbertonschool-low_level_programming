#include "lists.h"
/**
 * listint_len - Imprime el numero de elementos de listint_t.
 * @h: Puntero a listint_t.
 * Return: nodos.
 */
size_t listint_len(const listint_t *h)
{
	int iterador = 0;

	for (; h; iterador++)
	{
		h = h->next;
	}
	return (iterador);
}

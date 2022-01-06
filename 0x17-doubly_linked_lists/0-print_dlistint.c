#include "lists.h"
/**
 * print_dlistint - Imprimo todos los elementos de h.
 * @h: Puntero a la lista.
 * Return: Numero de nodos
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodos = 0;

	for (; h; nodos++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodos);
}

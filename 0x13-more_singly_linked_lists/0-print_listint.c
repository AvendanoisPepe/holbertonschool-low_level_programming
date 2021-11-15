#include "lists.h"
/**
 * print_listint - Imprime todos los elementos de listint_t
 * @h: Enlace o puntero a listint_t
 * Return: Numero de nodos.
 */
size_t print_listint(const listint_t *h)
{
	int iterador = 0;

	for (; h; iterador++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (iterador);
}

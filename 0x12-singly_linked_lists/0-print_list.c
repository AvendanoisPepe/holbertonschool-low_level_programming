#include "lists.h"
/**
 * print_list - Imprime todos los elementos de la lista.
 * @h:Puntero a la lista a imprimir.
 * Return:iterador;
 */
size_t print_list(const list_t *h)
{
	int iterador = 0;

	for (; h; iterador++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (iterador);
}

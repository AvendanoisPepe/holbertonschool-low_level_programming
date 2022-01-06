#include "lists.h"
/**
 * get_dnodeint_at_index - Devuelve cierto nodo de la lista
 * @head: puntero a lista.
 * @index: el nodo que se necesita.
 * Return: la direccion del nodo.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *Temporal = head;
	size_t contador;

	for (contador = 0; Temporal; contador++)
	{
		if (index == contador)
			return (Temporal);
		Temporal = Temporal->next;
	}

	return (NULL);
}
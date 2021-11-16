#include "lists.h"
/**
 * insert_nodeint_at_index - Agrega un nuevo nodo en listint_t en
 * determinada posicion.
 * @head: Doble puntero a listint_t.
 * @idx: Indice donde se debe agregar el nuevo nodo.
 * @n:Contenido del nuevo nodo.
 * Return: Si falla null si no la direccion del nodo.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nuevo;
	listint_t *Temporal = *head;
	unsigned int iterador = 0;

	nuevo = malloc(sizeof(listint_t));
	if (nuevo == NULL || head == NULL)
	{
		return (NULL);
	}

	nuevo->n = n;
	nuevo->next = NULL;

	if (idx == 0)
	{
		nuevo->next = *head;
		*head = nuevo;
		return (nuevo);
	}

	iterador = 0;
	while (iterador < idx)
	{
		if (iterador == idx - 1)
		{
			nuevo->next = Temporal->next;
			Temporal->next = nuevo;
			return (nuevo);
		}
		else
		{
			Temporal = Temporal->next;
		}
		iterador++;
	}
	return (NULL);
}
